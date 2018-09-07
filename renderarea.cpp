#include "renderarea.h"
#include <queue>
#include <QTimer>

RenderArea::RenderArea(QWidget *parent) : QWidget(parent)
{
    setAttribute(Qt::WA_StaticContents);
    setMouseTracking(true);  // 不必按压鼠标即可触发MouseMoveEvent()
    scribbling = false;
    rrt = new RRT;
}

// 地图
void RenderArea::drawField(QPainter & painter)
{
    painter.save();
    painter.setRenderHint(QPainter::Antialiasing);
    QRect field;
    field.setTopLeft(QPoint(this->x(), this->y()));
    field.setBottomRight(QPoint(this->width(), this->height()));
    painter.setPen(Qt::black);
    painter.setBrush(QBrush(Qt::lightGray));
    painter.drawRect(field);
    painter.restore();
}

// 起点
void RenderArea::drawStartPos(QPainter& painter)
{
    painter.save();
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setPen(Qt::black);
    painter.setBrush(QBrush(Qt::yellow));
    painter.drawEllipse(rrt->startPos.x() - BOT_RADIUS, rrt->startPos.y() -
                        BOT_RADIUS, 2 * BOT_RADIUS, 2 * BOT_RADIUS);
    painter.restore();
}

// 终点
void RenderArea::drawEndPos(QPainter& painter)
{
    painter.save();
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setPen(Qt::black);
    painter.setBrush(QBrush(Qt::yellow));
    painter.drawEllipse(rrt->endPos.x() - BOT_RADIUS, rrt->endPos.y() - BOT_RADIUS, 2 * BOT_RADIUS, 2 * BOT_RADIUS);
}

// 障碍物
void RenderArea::drawObstacles(QPainter& painter)
{
    painter.save();
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setPen(Qt::black);
    painter.setBrush(QBrush(Qt::black));
    pair<Vector2f, Vector2f> obstacle;
    for (int i = 0; i < (int)rrt->obstacles->obstacles.size(); i++) {
        obstacle = rrt->obstacles->obstacles[i];
        QPoint topLeft(obstacle.first.x() + BOT_CLEARANCE, obstacle.first.y() + BOT_CLEARANCE);
        QPoint bottomRight(obstacle.second.x() - BOT_CLEARANCE, obstacle.second.y() - BOT_CLEARANCE);
        QRect rect(topLeft, bottomRight);
        painter.drawRect(rect);
    }
    painter.restore();
}

// 节点
void RenderArea::drawNodes(QPainter& painter)
{
    painter.save();
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setPen(Qt::black);
    painter.setBrush(QBrush(Qt::black));
    Vector2f pos;
    for (int i = 0; i < (int)rrt->nodes.size(); i++) {
        for (int j = 0; j < (int)rrt->nodes[i]->children.size(); j++) {
            pos = rrt->nodes[i]->children[j]->position;
            painter.drawEllipse(pos.x() - 1.5, pos.y() - 1.5, 3, 3);
        }
        pos = rrt->nodes[i]->position;
        painter.drawEllipse(pos.x() - NODE_RADIUS, pos.y() - NODE_RADIUS, 2 * NODE_RADIUS, 2 * NODE_RADIUS);
    }
    painter.setPen(Qt::red);
    painter.setBrush(QBrush(Qt::red));

    for (int i = 0; i < (int)rrt->path.size() - 1; i++) {
        QPointF p1(rrt->path[i]->position.x(), rrt->path[i]->position.y());
        QPointF p2(rrt->path[i+1]->position.x(), rrt->path[i+1]->position.y());
        painter.drawLine(p1, p2);
    }
    painter.restore();
}

// 绘图
void RenderArea::paintEvent(QPaintEvent* event)
{
    QPainter painter(this);
    drawField(painter);
    drawStartPos(painter);
    drawEndPos(painter);
    drawObstacles(painter);
    drawNodes(painter);
    emit painting();
}

void RenderArea::mousePressEvent(QMouseEvent* event)
{
    if (event->button() == Qt::LeftButton) {
        lastMouseClickedPoint = event->pos();
        scribbling = true;
    }
}

void RenderArea::mouseMoveEvent(QMouseEvent* event)
{
    emit sendMousePos(event);  // 发射鼠标位置给主窗口
}


void RenderArea::mouseReleaseEvent(QMouseEvent* event)
{
    if (event->button() == Qt::LeftButton && scribbling) {
        QPoint curPoint = event->pos();
        rrt->obstacles->addObstacles(Vector2f(lastMouseClickedPoint.x(), lastMouseClickedPoint.y()), Vector2f(curPoint.x(), curPoint.y()));
        update();
        scribbling = false;
        emit sendObstacleRate(rrt->obstacles->getObstacleRate());  // 发送更新后的障碍物占比给主窗口
    }
}
