/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>
#include <mazewidget.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *btnLoadMazeFromFile;
    QPushButton *btnGenerateMaze;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QSpinBox *end_y;
    QLabel *labelStart;
    QLabel *labelStart_x;
    QLabel *labelStart_x_2;
    QSpinBox *start_y;
    QSpinBox *start_x;
    QLabel *labelStart_x_3;
    QLabel *labelStart_x_4;
    QSpinBox *end_x;
    QLabel *labelEnd;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *labelCols;
    QLabel *labelRows;
    QSpinBox *spinBoxRows;
    QSpinBox *spinBoxCols;
    MazeWidget *maze;
    QPushButton *btnSolveMaze;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(660, 700);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        btnLoadMazeFromFile = new QPushButton(centralwidget);
        btnLoadMazeFromFile->setObjectName(QString::fromUtf8("btnLoadMazeFromFile"));
        btnLoadMazeFromFile->setGeometry(QRect(70, 540, 231, 32));
        btnGenerateMaze = new QPushButton(centralwidget);
        btnGenerateMaze->setObjectName(QString::fromUtf8("btnGenerateMaze"));
        btnGenerateMaze->setGeometry(QRect(380, 540, 231, 32));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(40, 600, 281, 54));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        end_y = new QSpinBox(gridLayoutWidget);
        end_y->setObjectName(QString::fromUtf8("end_y"));
        end_y->setMinimum(1);
        end_y->setMaximum(50);
        end_y->setValue(9);

        gridLayout->addWidget(end_y, 1, 4, 1, 1);

        labelStart = new QLabel(gridLayoutWidget);
        labelStart->setObjectName(QString::fromUtf8("labelStart"));

        gridLayout->addWidget(labelStart, 0, 0, 1, 1);

        labelStart_x = new QLabel(gridLayoutWidget);
        labelStart_x->setObjectName(QString::fromUtf8("labelStart_x"));

        gridLayout->addWidget(labelStart_x, 0, 1, 1, 1, Qt::AlignRight);

        labelStart_x_2 = new QLabel(gridLayoutWidget);
        labelStart_x_2->setObjectName(QString::fromUtf8("labelStart_x_2"));

        gridLayout->addWidget(labelStart_x_2, 0, 3, 1, 1, Qt::AlignRight);

        start_y = new QSpinBox(gridLayoutWidget);
        start_y->setObjectName(QString::fromUtf8("start_y"));
        start_y->setMinimum(1);
        start_y->setMaximum(50);
        start_y->setValue(1);

        gridLayout->addWidget(start_y, 0, 4, 1, 1);

        start_x = new QSpinBox(gridLayoutWidget);
        start_x->setObjectName(QString::fromUtf8("start_x"));
        start_x->setMinimum(1);
        start_x->setMaximum(50);

        gridLayout->addWidget(start_x, 0, 2, 1, 1);

        labelStart_x_3 = new QLabel(gridLayoutWidget);
        labelStart_x_3->setObjectName(QString::fromUtf8("labelStart_x_3"));

        gridLayout->addWidget(labelStart_x_3, 1, 1, 1, 1, Qt::AlignRight);

        labelStart_x_4 = new QLabel(gridLayoutWidget);
        labelStart_x_4->setObjectName(QString::fromUtf8("labelStart_x_4"));

        gridLayout->addWidget(labelStart_x_4, 1, 3, 1, 1, Qt::AlignRight);

        end_x = new QSpinBox(gridLayoutWidget);
        end_x->setObjectName(QString::fromUtf8("end_x"));
        end_x->setMinimum(1);
        end_x->setMaximum(50);
        end_x->setValue(9);

        gridLayout->addWidget(end_x, 1, 2, 1, 1);

        labelEnd = new QLabel(gridLayoutWidget);
        labelEnd->setObjectName(QString::fromUtf8("labelEnd"));

        gridLayout->addWidget(labelEnd, 1, 0, 1, 1);

        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(390, 600, 221, 54));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        labelCols = new QLabel(gridLayoutWidget_2);
        labelCols->setObjectName(QString::fromUtf8("labelCols"));

        gridLayout_2->addWidget(labelCols, 1, 0, 1, 1, Qt::AlignRight);

        labelRows = new QLabel(gridLayoutWidget_2);
        labelRows->setObjectName(QString::fromUtf8("labelRows"));

        gridLayout_2->addWidget(labelRows, 0, 0, 1, 1, Qt::AlignRight);

        spinBoxRows = new QSpinBox(gridLayoutWidget_2);
        spinBoxRows->setObjectName(QString::fromUtf8("spinBoxRows"));
        spinBoxRows->setMinimum(1);
        spinBoxRows->setMaximum(50);
        spinBoxRows->setValue(10);

        gridLayout_2->addWidget(spinBoxRows, 0, 1, 1, 1);

        spinBoxCols = new QSpinBox(gridLayoutWidget_2);
        spinBoxCols->setObjectName(QString::fromUtf8("spinBoxCols"));
        spinBoxCols->setMinimum(1);
        spinBoxCols->setMaximum(50);
        spinBoxCols->setValue(10);

        gridLayout_2->addWidget(spinBoxCols, 1, 1, 1, 1);

        maze = new MazeWidget(centralwidget);
        maze->setObjectName(QString::fromUtf8("maze"));
        maze->setGeometry(QRect(80, 20, 500, 500));
        maze->setAutoFillBackground(false);
        maze->setStyleSheet(QString::fromUtf8("background-color:white;"));
        btnSolveMaze = new QPushButton(centralwidget);
        btnSolveMaze->setObjectName(QString::fromUtf8("btnSolveMaze"));
        btnSolveMaze->setGeometry(QRect(380, 570, 231, 32));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btnLoadMazeFromFile->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\273\320\260\320\261\320\270\321\200\320\270\320\275\321\202", nullptr));
        btnGenerateMaze->setText(QCoreApplication::translate("MainWindow", "\320\241\320\263\320\265\320\275\320\265\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\273\320\260\320\261\320\270\321\200\320\270\320\275\321\202", nullptr));
        labelStart->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\260\321\200\321\202\320\276\320\262\321\213\320\265 \320\272\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\321\213:", nullptr));
        labelStart_x->setText(QCoreApplication::translate("MainWindow", "x:", nullptr));
        labelStart_x_2->setText(QCoreApplication::translate("MainWindow", "y:", nullptr));
        labelStart_x_3->setText(QCoreApplication::translate("MainWindow", "x:", nullptr));
        labelStart_x_4->setText(QCoreApplication::translate("MainWindow", "y:", nullptr));
        labelEnd->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\275\320\265\321\207\320\275\321\213\320\265 \320\272\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\321\213:", nullptr));
        labelCols->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\201\321\202\320\276\320\273\320\261\321\206\320\276\320\262:", nullptr));
        labelRows->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\201\321\202\321\200\320\276\320\272:", nullptr));
        btnSolveMaze->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\321\210\320\270\321\202\321\214 \320\273\320\260\320\261\320\270\321\200\320\270\320\275\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
