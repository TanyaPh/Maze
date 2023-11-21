#include "mainwindow.h"
#include "MazeController.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow), controller_()
{
    ui->setupUi(this);
    ui->maze->clearSolution();
    ui->btnSolveMaze->setEnabled(false);

    ui->end_x->setMaximum(ui->spinBoxCols->value());
    ui->end_y->setMaximum(ui->spinBoxRows->value());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnGenerateMaze_clicked()
{
//    try {
//        const int numRows = ui->spinBoxRows->value();
//        const int numCols = ui->spinBoxCols->value();

//        ui->maze->clearSolution();

//        Matrix myMatrix(numRows, numCols);

//        // зполнение матрицы по вертикали и горизонтали
//        myMatrix.generateMaze();
//        myMatrix.saveMaze("awd.txt");

//        // создание виджета и установка матрицы
//        ui->maze->setMatrix(myMatrix);

//        // отображение виджета
//        ui->maze->show();
//        ui->btnSolveMaze->setEnabled(true);
//    } catch (const std::exception& e) {
//        qDebug() << "Exception caught: " << e.what();
//    }

    try {
        ui->maze->clearSolution();
        controller_.generateMaze(ui->spinBoxRows->value(), ui->spinBoxCols->value());
        ui->maze->setMatrix(controller_.getMatrix());
        ui->maze->show();
        ui->btnSolveMaze->setEnabled(true);
    } catch (const std::exception& e) {
        qDebug() << "Exception caught: " << e.what();
    }

}


void MainWindow::on_btnSolveMaze_clicked()
{
//    try {
//        MazeSolver mazeSolver;

//        const int start_x = ui->start_x->value();
//        const int start_y = ui->start_y->value();
//        const int end_x = ui->end_x->value();
//        const int end_y = ui->end_y->value();

//        if (start_x == end_x && start_y == end_y) {
//            throw std::runtime_error("Start and end coordinates are the same.");
//        }

//        std::pair<int, int> src(start_y-1, start_x-1);  // начальные координаты
//        std::pair<int, int> dest(end_y-1, end_x-1);  // конечные координаты

//        mazeSolver.parseMaze("awd.txt");
//        std::cout << "parseMaze был\n";

//        std::vector<std::vector<int>> wave = mazeSolver.findPath(src, dest);

//        std::cout << "findPath был\n";
//        QVector<QPoint> path;
//        for (size_t i = 0; i < wave.size(); ++i) {
//            for (size_t j = 0; j < wave[i].size(); ++j) {
//                if (wave[i][j] != -1) {
//                    path.append(QPoint(static_cast<int>(j), static_cast<int>(i)));
//                    std::cout << "[" << i << "][" << j << "] ";
//                }
//            }
//        }

//        auto compareFunction = [&](const QPoint& point1, const QPoint& point2) {
//            return wave[point1.y()][point1.x()] < wave[point2.y()][point2.x()];
//        };

//        std::sort(path.begin(), path.end(), compareFunction);
//        std::cout << "sort был\n";

//        ui->maze->setSolution(path);
//    } catch (const std::exception& e) {
//        QMessageBox::critical(this, "Error", e.what());
//    }

    try {
        std::vector<std::vector<int>> wave = controller_.solveMaze({ui->start_y->value()-1, ui->start_x->value()-1},
                                                                   {ui->end_y->value()-1, ui->end_x->value()-1});
        std::cout << "findPath был\n";
        QVector<QPoint> path;
        for (size_t i = 0; i < wave.size(); ++i) {
            for (size_t j = 0; j < wave[i].size(); ++j) {
                if (wave[i][j] != -1) {
                    path.append(QPoint(static_cast<int>(j), static_cast<int>(i)));
                    std::cout << "[" << i << "][" << j << "] ";
                }
            }
        }

        auto compareFunction = [&](const QPoint& point1, const QPoint& point2) {
            return wave[point1.y()][point1.x()] < wave[point2.y()][point2.x()];
        };

        std::sort(path.begin(), path.end(), compareFunction);
        std::cout << "sort был\n";

        ui->maze->setSolution(path);
    } catch (const std::exception& e) {
        QMessageBox::critical(this, "Error", e.what());
    }

}


void MainWindow::on_spinBoxRows_valueChanged(int arg1)
{
    ui->end_y->setMaximum(arg1);
    std::cout << "\nstart: " << ui->start_x->value() << ", " << ui->start_y->value() << "\n end: " << ui->end_x->value() << ", " << ui->end_y->value();
}


void MainWindow::on_spinBoxCols_valueChanged(int arg1)
{
    ui->end_x->setMaximum(arg1);
    std::cout << "\nstart: " << ui->start_x->value() << ", " << ui->start_y->value() << "\n end: " << ui->end_x->value() << ", " << ui->end_y->value();
}
