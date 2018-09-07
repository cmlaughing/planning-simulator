/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "renderarea.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    RenderArea *renderArea;
    QTabWidget *problemWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label;
    QLineEdit *positionBox;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer;
    QLabel *label_11;
    QDoubleSpinBox *startPosxBox;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_14;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_12;
    QDoubleSpinBox *startPosyBox;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_16;
    QHBoxLayout *horizontalLayout_15;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_18;
    QDoubleSpinBox *endPosxBox;
    QSpacerItem *horizontalSpacer_11;
    QHBoxLayout *horizontalLayout_19;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_17;
    QDoubleSpinBox *endPosyBox;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_2;
    QSpinBox *maxIterationBox;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_16;
    QSpacerItem *horizontalSpacer_23;
    QPushButton *setButton;
    QWidget *plannerWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QComboBox *plannerBox;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_7;
    QSpinBox *stepSizeBox;
    QSpacerItem *horizontalSpacer_7;
    QWidget *obstacleWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_9;
    QLineEdit *obstaceRateBox;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_6;
    QLabel *label_27;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_13;
    QLabel *label_30;
    QDoubleSpinBox *leftPosxBox;
    QSpacerItem *horizontalSpacer_16;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_14;
    QLabel *label_31;
    QDoubleSpinBox *leftPosyBox;
    QSpacerItem *horizontalSpacer_15;
    QSpacerItem *horizontalSpacer_17;
    QLabel *label_34;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_18;
    QLabel *label_29;
    QDoubleSpinBox *rightPosxBox;
    QSpacerItem *horizontalSpacer_21;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_19;
    QLabel *label_32;
    QDoubleSpinBox *rightPosyBox;
    QSpacerItem *horizontalSpacer_20;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_22;
    QPushButton *addObstacleButton;
    QWidget *solveWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *solveButton;
    QPushButton *clearButton;
    QPushButton *resetButton;
    QLabel *label_35;
    QLineEdit *statusBox;
    QLabel *label_28;
    QLineEdit *timeCountBox;
    QLabel *label_33;
    QLineEdit *pathLengthBox;
    QLabel *label_36;
    QLineEdit *iterationCountBox;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(887, 547);
        MainWindow->setMinimumSize(QSize(0, 0));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        centralWidget->setAutoFillBackground(true);
        verticalLayout_3 = new QVBoxLayout(centralWidget);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        renderArea = new RenderArea(centralWidget);
        renderArea->setObjectName(QStringLiteral("renderArea"));
        renderArea->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(renderArea->sizePolicy().hasHeightForWidth());
        renderArea->setSizePolicy(sizePolicy1);
        renderArea->setMinimumSize(QSize(500, 500));
        renderArea->setMaximumSize(QSize(500, 500));
        renderArea->setAutoFillBackground(false);

        horizontalLayout_3->addWidget(renderArea);

        problemWidget = new QTabWidget(centralWidget);
        problemWidget->setObjectName(QStringLiteral("problemWidget"));
        problemWidget->setMaximumSize(QSize(500, 500));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout = new QVBoxLayout(tab);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(100, 0));
        label->setMaximumSize(QSize(100, 16777215));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(label);

        positionBox = new QLineEdit(tab);
        positionBox->setObjectName(QStringLiteral("positionBox"));
        sizePolicy1.setHeightForWidth(positionBox->sizePolicy().hasHeightForWidth());
        positionBox->setSizePolicy(sizePolicy1);
        positionBox->setMaximumSize(QSize(100, 16777215));
        positionBox->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(positionBox);

        horizontalSpacer_4 = new QSpacerItem(78, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_11);

        verticalSpacer_3 = new QSpacerItem(20, 73, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        label_10 = new QLabel(tab);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout->addWidget(label_10);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer);

        label_11 = new QLabel(tab);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_13->addWidget(label_11);

        startPosxBox = new QDoubleSpinBox(tab);
        startPosxBox->setObjectName(QStringLiteral("startPosxBox"));
        startPosxBox->setMinimum(0);
        startPosxBox->setMaximum(500);

        horizontalLayout_13->addWidget(startPosxBox);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_9);


        verticalLayout->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_2);

        label_12 = new QLabel(tab);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_14->addWidget(label_12);

        startPosyBox = new QDoubleSpinBox(tab);
        startPosyBox->setObjectName(QStringLiteral("startPosyBox"));
        startPosyBox->setMaximum(500);

        horizontalLayout_14->addWidget(startPosyBox);

        horizontalSpacer_10 = new QSpacerItem(37, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_10);


        verticalLayout->addLayout(horizontalLayout_14);

        verticalSpacer_2 = new QSpacerItem(20, 29, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label_16 = new QLabel(tab);
        label_16->setObjectName(QStringLiteral("label_16"));

        verticalLayout->addWidget(label_16);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_3);

        label_18 = new QLabel(tab);
        label_18->setObjectName(QStringLiteral("label_18"));

        horizontalLayout_15->addWidget(label_18);

        endPosxBox = new QDoubleSpinBox(tab);
        endPosxBox->setObjectName(QStringLiteral("endPosxBox"));
        endPosxBox->setMaximum(500);

        horizontalLayout_15->addWidget(endPosxBox);

        horizontalSpacer_11 = new QSpacerItem(37, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_11);


        verticalLayout->addLayout(horizontalLayout_15);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_5);

        label_17 = new QLabel(tab);
        label_17->setObjectName(QStringLiteral("label_17"));

        horizontalLayout_19->addWidget(label_17);

        endPosyBox = new QDoubleSpinBox(tab);
        endPosyBox->setObjectName(QStringLiteral("endPosyBox"));
        endPosyBox->setMaximum(500);

        horizontalLayout_19->addWidget(endPosyBox);

        horizontalSpacer_12 = new QSpacerItem(37, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_12);


        verticalLayout->addLayout(horizontalLayout_19);

        verticalSpacer = new QSpacerItem(20, 26, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(100, 0));
        label_2->setMaximumSize(QSize(100, 16777215));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(label_2);

        maxIterationBox = new QSpinBox(tab);
        maxIterationBox->setObjectName(QStringLiteral("maxIterationBox"));
        maxIterationBox->setMaximum(10000);
        maxIterationBox->setValue(2000);

        horizontalLayout_12->addWidget(maxIterationBox);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_12);

        verticalSpacer_4 = new QSpacerItem(20, 35, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        horizontalSpacer_23 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_23);

        setButton = new QPushButton(tab);
        setButton->setObjectName(QStringLiteral("setButton"));

        horizontalLayout_16->addWidget(setButton);


        verticalLayout->addLayout(horizontalLayout_16);

        problemWidget->addTab(tab, QString());
        plannerWidget = new QWidget();
        plannerWidget->setObjectName(QStringLiteral("plannerWidget"));
        layoutWidget = new QWidget(plannerWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(9, 9, 177, 29));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy2);
        label_6->setMinimumSize(QSize(100, 0));
        label_6->setMaximumSize(QSize(100, 16777215));
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_6);

        plannerBox = new QComboBox(layoutWidget);
        plannerBox->setObjectName(QStringLiteral("plannerBox"));
        plannerBox->setEditable(false);

        horizontalLayout->addWidget(plannerBox);

        horizontalLayout->setStretch(1, 1);
        layoutWidget1 = new QWidget(plannerWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(40, 250, 221, 29));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QStringLiteral("label_7"));
        sizePolicy2.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy2);
        label_7->setMinimumSize(QSize(100, 0));
        label_7->setMaximumSize(QSize(100, 16777215));
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_10->addWidget(label_7);

        stepSizeBox = new QSpinBox(layoutWidget1);
        stepSizeBox->setObjectName(QStringLiteral("stepSizeBox"));
        stepSizeBox->setValue(3);

        horizontalLayout_10->addWidget(stepSizeBox);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_7);

        horizontalLayout_10->setStretch(2, 1);
        problemWidget->addTab(plannerWidget, QString());
        obstacleWidget = new QWidget();
        obstacleWidget->setObjectName(QStringLiteral("obstacleWidget"));
        verticalLayout_2 = new QVBoxLayout(obstacleWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_9 = new QLabel(obstacleWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(100, 0));
        label_9->setMaximumSize(QSize(100, 16777215));
        label_9->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_9);

        obstaceRateBox = new QLineEdit(obstacleWidget);
        obstaceRateBox->setObjectName(QStringLiteral("obstaceRateBox"));
        obstaceRateBox->setMaximumSize(QSize(100, 16777215));
        obstaceRateBox->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(obstaceRateBox);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_6);

        label_27 = new QLabel(obstacleWidget);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setMinimumSize(QSize(100, 0));
        label_27->setMaximumSize(QSize(100, 16777215));
        label_27->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_27);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_13);

        label_30 = new QLabel(obstacleWidget);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setMinimumSize(QSize(100, 0));
        label_30->setMaximumSize(QSize(100, 16777215));
        label_30->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_30);

        leftPosxBox = new QDoubleSpinBox(obstacleWidget);
        leftPosxBox->setObjectName(QStringLiteral("leftPosxBox"));

        horizontalLayout_5->addWidget(leftPosxBox);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_16);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_14);

        label_31 = new QLabel(obstacleWidget);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setMinimumSize(QSize(100, 0));
        label_31->setMaximumSize(QSize(100, 16777215));
        label_31->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_31);

        leftPosyBox = new QDoubleSpinBox(obstacleWidget);
        leftPosyBox->setObjectName(QStringLiteral("leftPosyBox"));

        horizontalLayout_6->addWidget(leftPosyBox);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_15);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalSpacer_17 = new QSpacerItem(342, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer_17);

        label_34 = new QLabel(obstacleWidget);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setMinimumSize(QSize(100, 0));
        label_34->setMaximumSize(QSize(100, 16777215));
        label_34->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_34);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_18);

        label_29 = new QLabel(obstacleWidget);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setMinimumSize(QSize(100, 0));
        label_29->setMaximumSize(QSize(100, 16777215));
        label_29->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_29);

        rightPosxBox = new QDoubleSpinBox(obstacleWidget);
        rightPosxBox->setObjectName(QStringLiteral("rightPosxBox"));

        horizontalLayout_7->addWidget(rightPosxBox);

        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_21);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_19);

        label_32 = new QLabel(obstacleWidget);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setMinimumSize(QSize(100, 0));
        label_32->setMaximumSize(QSize(100, 16777215));
        label_32->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(label_32);

        rightPosyBox = new QDoubleSpinBox(obstacleWidget);
        rightPosyBox->setObjectName(QStringLiteral("rightPosyBox"));

        horizontalLayout_8->addWidget(rightPosyBox);

        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_20);


        verticalLayout_2->addLayout(horizontalLayout_8);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_5);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_22);

        addObstacleButton = new QPushButton(obstacleWidget);
        addObstacleButton->setObjectName(QStringLiteral("addObstacleButton"));

        horizontalLayout_9->addWidget(addObstacleButton);


        verticalLayout_2->addLayout(horizontalLayout_9);

        problemWidget->addTab(obstacleWidget, QString());

        horizontalLayout_3->addWidget(problemWidget);


        verticalLayout_3->addLayout(horizontalLayout_3);

        solveWidget = new QWidget(centralWidget);
        solveWidget->setObjectName(QStringLiteral("solveWidget"));
        horizontalLayout_2 = new QHBoxLayout(solveWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        solveButton = new QPushButton(solveWidget);
        solveButton->setObjectName(QStringLiteral("solveButton"));

        horizontalLayout_2->addWidget(solveButton);

        clearButton = new QPushButton(solveWidget);
        clearButton->setObjectName(QStringLiteral("clearButton"));

        horizontalLayout_2->addWidget(clearButton);

        resetButton = new QPushButton(solveWidget);
        resetButton->setObjectName(QStringLiteral("resetButton"));

        horizontalLayout_2->addWidget(resetButton);

        label_35 = new QLabel(solveWidget);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_35);

        statusBox = new QLineEdit(solveWidget);
        statusBox->setObjectName(QStringLiteral("statusBox"));
        statusBox->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(statusBox);

        label_28 = new QLabel(solveWidget);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_28);

        timeCountBox = new QLineEdit(solveWidget);
        timeCountBox->setObjectName(QStringLiteral("timeCountBox"));
        sizePolicy1.setHeightForWidth(timeCountBox->sizePolicy().hasHeightForWidth());
        timeCountBox->setSizePolicy(sizePolicy1);
        timeCountBox->setMaximumSize(QSize(70, 16777215));
        timeCountBox->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(timeCountBox);

        label_33 = new QLabel(solveWidget);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_33);

        pathLengthBox = new QLineEdit(solveWidget);
        pathLengthBox->setObjectName(QStringLiteral("pathLengthBox"));
        sizePolicy1.setHeightForWidth(pathLengthBox->sizePolicy().hasHeightForWidth());
        pathLengthBox->setSizePolicy(sizePolicy1);
        pathLengthBox->setMaximumSize(QSize(70, 16777215));
        pathLengthBox->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(pathLengthBox);

        label_36 = new QLabel(solveWidget);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_36);

        iterationCountBox = new QLineEdit(solveWidget);
        iterationCountBox->setObjectName(QStringLiteral("iterationCountBox"));
        sizePolicy1.setHeightForWidth(iterationCountBox->sizePolicy().hasHeightForWidth());
        iterationCountBox->setSizePolicy(sizePolicy1);
        iterationCountBox->setMaximumSize(QSize(70, 16777215));
        iterationCountBox->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(iterationCountBox);


        verticalLayout_3->addWidget(solveWidget);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        problemWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "RRT Simulator", 0));
        label->setText(QApplication::translate("MainWindow", "Position", 0));
        label_10->setText(QApplication::translate("MainWindow", "StartPos", 0));
        label_11->setText(QApplication::translate("MainWindow", "X", 0));
        label_12->setText(QApplication::translate("MainWindow", "Y", 0));
        label_16->setText(QApplication::translate("MainWindow", "EndPos", 0));
        label_18->setText(QApplication::translate("MainWindow", "X", 0));
        label_17->setText(QApplication::translate("MainWindow", "Y", 0));
        label_2->setText(QApplication::translate("MainWindow", "MaxIteration", 0));
        setButton->setText(QApplication::translate("MainWindow", "Set", 0));
        problemWidget->setTabText(problemWidget->indexOf(tab), QApplication::translate("MainWindow", "Problem", 0));
        label_6->setText(QApplication::translate("MainWindow", "Planner", 0));
        plannerBox->clear();
        plannerBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "rrt", 0)
         << QApplication::translate("MainWindow", "ob-rrt", 0)
         << QApplication::translate("MainWindow", "hs-rrt", 0)
        );
        label_7->setText(QApplication::translate("MainWindow", "Stepsize", 0));
        problemWidget->setTabText(problemWidget->indexOf(plannerWidget), QApplication::translate("MainWindow", "Planner", 0));
        label_9->setText(QApplication::translate("MainWindow", "Obstacle  rate", 0));
        obstaceRateBox->setText(QApplication::translate("MainWindow", "0.00%", 0));
        label_27->setText(QApplication::translate("MainWindow", "LeftPos", 0));
        label_30->setText(QApplication::translate("MainWindow", "X", 0));
        label_31->setText(QApplication::translate("MainWindow", "Y", 0));
        label_34->setText(QApplication::translate("MainWindow", "RightPos", 0));
        label_29->setText(QApplication::translate("MainWindow", "X", 0));
        label_32->setText(QApplication::translate("MainWindow", "Y", 0));
        addObstacleButton->setText(QApplication::translate("MainWindow", "AddObs", 0));
        problemWidget->setTabText(problemWidget->indexOf(obstacleWidget), QApplication::translate("MainWindow", "Obstacle", 0));
        solveButton->setText(QApplication::translate("MainWindow", "Solve", 0));
        clearButton->setText(QApplication::translate("MainWindow", "Clear", 0));
        resetButton->setText(QApplication::translate("MainWindow", "Reset", 0));
        label_35->setText(QApplication::translate("MainWindow", "Status", 0));
        statusBox->setText(QApplication::translate("MainWindow", "ready !", 0));
        label_28->setText(QApplication::translate("MainWindow", "Time", 0));
        label_33->setText(QApplication::translate("MainWindow", "Length", 0));
        label_36->setText(QApplication::translate("MainWindow", "Iteration", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
