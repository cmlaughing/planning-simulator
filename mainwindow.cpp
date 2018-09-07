#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    renderArea = ui->renderArea;
    rrt = renderArea->rrt;
    simulated = false;  // 是否已有规划路径的flag
    connect(ui->renderArea, SIGNAL(sendObstacleRate(double)), this, SLOT(receiveObstacleRate(double)));  // 获取地图障碍物占比
    connect(ui->renderArea, SIGNAL(sendMousePos(QMouseEvent*)), this, SLOT(receiveMousePos(QMouseEvent*)));  //获取地图鼠标位置
}

// 鼠标位置获取
void MainWindow::receiveMousePos(QMouseEvent* event)
{
    QString msg;
    msg.sprintf("(%d, %d)", event->x(), event->y());
    ui->positionBox->setText(msg);
}

// 障碍物占比获取
void MainWindow::receiveObstacleRate(double obstacleRate)
{
    QString msg;
    msg.sprintf("%f %",obstacleRate * 100);
    ui->obstaceRateBox->setText(msg);
}

// 起点和终点位置设定
void MainWindow::on_setButton_clicked()
{
    Vector2f startPos, endPos;
    startPos.x() = ui->startPosxBox->value();
    startPos.y() = ui->startPosyBox->value();
    endPos.x() = ui->endPosxBox->value();
    endPos.y() = ui->endPosyBox->value();
    rrt->startPos = startPos;
    rrt->endPos = endPos;
    renderArea->update();
}

// 添加障碍物，并计算障碍物占比
void MainWindow::on_addObstacleButton_clicked()
{
    Vector2f leftPoint, rightPoint;
    leftPoint.x() = ui->leftPosxBox->value();
    leftPoint.y() = ui->leftPosyBox->value();
    rightPoint.x() = ui->rightPosxBox->value();
    rightPoint.y() = ui->rightPosyBox->value();
    rrt->obstacles->addObstacles(leftPoint,rightPoint);
    double obstacleRate = rrt->obstacles->getObstacleRate();
    this->receiveObstacleRate(obstacleRate);
    renderArea->update();
}

// 开始规划
void MainWindow::on_solveButton_clicked()
{
    if (simulated) {
        ui->statusBox->setText(tr("please reset!"));
        renderArea->update();
        return;
    }
    simulated = true;

    // 运行参数获取（最大迭代数、步长）
    rrt->setMaxIterations(ui->maxIterationBox->value());
    rrt->setStepSize(ui->stepSizeBox->value());

    assert(rrt->step_size > 0);
    assert(rrt->max_iter > 0);

    // 运行时间统计
    QTime time;
    time.start();

    // 算法选择
    if (ui->plannerBox->currentText() == "rrt") {
        for (int i = 0; i < rrt->max_iter; i++) {
            Node* q = rrt->getRandomNode();
            if (q) {
                Node* qNearest = rrt->nearest(q->position);
                if (rrt->distance(q->position, qNearest->position) > rrt->step_size) {
                    Vector2f newConfig = rrt->newConfig(q, qNearest);
                    if (!rrt->obstacles->isSegmentInObstacles(newConfig, qNearest->position)) {
                        Node* qNew = new Node;
                        qNew->position = newConfig;
                        rrt->add(qNearest, qNew);
                    }
                }
            }
            // 统计迭代次数
            if (rrt->reached()) {
                ui->statusBox->setText(tr("sucessed !"));
                QString msg;
                msg.sprintf("%d",i);
                ui->iterationCountBox->setText(msg);
                break;
            }
        }
    }

    // 改进算法
    else if (ui->plannerBox->currentText() == "hs-rrt") {
        for (int i = 0; i < rrt->max_iter; i++) {
            Node* q = rrt->getRandomNode();
            if (q) {
                Node* qNearest = rrt->nearest(q->position);
                if (rrt->distance(q->position, qNearest->position)) {
                    QLineF l1(QPointF(qNearest->position.x(), qNearest->position.y()),
                              QPointF(q->position.x(), q->position.y()));
                    QLineF l2(QPointF(qNearest->position.x(), qNearest->position.y()),
                              QPointF(rrt->endPos.x(), rrt->endPos.y()));
                    qreal angle = l2.angleTo(l1);  // 扩展方向和目标点方向夹角
                    angle = angle > 180 ? 360 - angle : angle;
                    angle = 1 - angle / 180;
                    qreal disToEnd = rrt->distance(qNearest->position, rrt->endPos);  // 节点与目标点距离
                    qreal disToStart = rrt->distance(qNearest->position, rrt->startPos);  // 节点与起始点距离
                    qreal dis = 1 - abs(disToEnd - disToStart) / sqrt(double(powf(rrt->endPos.x()-rrt->startPos.x(), 2))+double(powf(rrt->startPos.y()-rrt->endPos.y(), 2)));
                    double stepSize = rrt->step_size * (5 * angle + dis)/3;
                    Vector2f intermediate = q->position - qNearest->position;
                    intermediate = intermediate / intermediate.norm();
                    Vector2f newConfig = qNearest->position + stepSize * intermediate;
                    if (!rrt->obstacles->isSegmentInObstacles(newConfig, qNearest->position)) {
                        Node* qNew = new Node;
                        qNew->position = newConfig;
                        rrt->add(qNearest, qNew);
                    }
                }
            }
            if (rrt->reached()) {
                ui->statusBox->setText(tr("successed !"));
                QString msg;
                msg.sprintf("%d",i);
                ui->iterationCountBox->setText(msg);
                break;
            }
        }
    }

    // 目标偏向RRT算法
    else if (ui->plannerBox->currentText() == "ob-rrt") {
        for (int i = 0; i < renderArea->rrt->max_iter; i++) {
            double random_number = qrand()/double(RAND_MAX);
            Node* q = new Node;
            if (random_number < 0.2) {
                q->position = rrt->endPos;
            }
            else
                q = rrt->getRandomNode();
            if (q) {
                Node* qNearest = rrt->nearest(q->position);
                if (rrt->distance(q->position, qNearest->position) > rrt->step_size) {
                    Vector2f newConfig = rrt->newConfig(q, qNearest);
                    if (!rrt->obstacles->isSegmentInObstacles(newConfig, qNearest->position)) {
                        Node* qNew = new Node;
                        qNew->position = newConfig;
                        rrt->add(qNearest, qNew);
                    }
                }
            }
            if (rrt->reached()) {
                ui->statusBox->setText(tr("successed !"));
                QString msg;
                msg.sprintf("%d",i);
                ui->iterationCountBox->setText(msg);
                break;
            }
        }
    }

    // 得到规划时间
    QString msg;
    msg.sprintf("%.3f s", time.elapsed()/1000.0);
    ui->timeCountBox->setText(msg);

    // 规划路径回溯
    Node* q;
    if (rrt->reached()) {
        q = rrt->lastNode;
    }
    else {
        q = rrt->nearest(rrt->endPos);
        ui->statusBox->setText(tr("failed !"));
    }

    int pathLength = 0;
    while (q != NULL) {
        rrt->path.push_back(q);
        if (q->parent != NULL)
            pathLength += rrt->distance(q->position, q->parent->position);
        q = q->parent;
    }

    msg.sprintf("%d",pathLength);
    ui->pathLengthBox->setText(msg);
    renderArea->update();
}

// 重置（仅清理路径）
void MainWindow::on_clearButton_clicked()
{
    simulated = false;
    ui->statusBox->setText(tr("ready !"));
    rrt->deleteNodes(rrt->root);
    rrt->nodes.clear();
    rrt->nodes.resize(0);
    rrt->path.clear();
    rrt->path.resize(0);
    rrt->initialize();
    renderArea->update();
}

// 重置（清理路径和障碍物）
void MainWindow::on_resetButton_clicked()
{
    simulated = false;
    ui->statusBox->setText(tr("ready !"));
    rrt->obstacles->obstacles.clear();
    rrt->obstacles->obstacles.resize(0);
    rrt->deleteNodes(rrt->root);
    rrt->nodes.clear();
    rrt->nodes.resize(0);
    rrt->path.clear();
    rrt->path.resize(0);
    rrt->initialize();
    renderArea->update();
}

MainWindow::~MainWindow()
{
    delete ui;
}
