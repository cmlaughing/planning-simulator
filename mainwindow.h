#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QTime>
#include "renderarea.h"
#include "rrt.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private:
    Ui::MainWindow *ui;
    RenderArea* renderArea;
    RRT* rrt;
    bool simulated;
private slots:
    void on_setButton_clicked();
    void on_solveButton_clicked();
    void on_resetButton_clicked();
    void on_clearButton_clicked();
    void on_addObstacleButton_clicked();
    void receiveObstacleRate(double);
    void receiveMousePos(QMouseEvent*);
};

#endif // MAINWINDOW_H
