#include "mazewidget.h"
#include <QPainter>

MazeWidget::MazeWidget(QWidget *parent) : QWidget(parent), mazeMatrix(10, 10) {
    setFixedSize(300, 300);
}


void MazeWidget::setMatrix(const Matrix &matrix) {
    mazeMatrix = matrix;
    update(); // вызывает paintEvent для перерисовки виджета
}

void MazeWidget::setSolution(const QVector<QPoint>& solution) {
    solutionPath = solution;
    update(); // Вызывает paintEvent для перерисовки виджета с учетом решения
}

QVector<QPoint> convertToQVector(const std::vector<std::vector<int>>& path) {
    QVector<QPoint> convertedPath;
    for (size_t i = 0; i < path.size(); ++i) {
        for (size_t j = 0; j < path[i].size(); ++j) {
            if (path[i][j] != -1) {
                convertedPath.append(QPoint(static_cast<int>(j), static_cast<int>(i)));
            }
        }
    }
    return convertedPath;
}

void MazeWidget::paintEvent(QPaintEvent* event) {
    Q_UNUSED(event);

    QPainter painter(this);

    int cellWidth = width() / mazeMatrix.getColumns();
    int cellHeight = height() / mazeMatrix.getRows();

    // отрисовка лабиринта
    for (int row = 0; row < mazeMatrix.getRows(); row++) {
        for (int col = 0; col < mazeMatrix.getColumns() - 1; col++) {
            if (mazeMatrix.getVerticalValue(row, col) == 1) {
                painter.fillRect((col + 1) * cellWidth, row * cellHeight, 1, cellHeight, Qt::black);
            }
        }
    }

    for (int row = 0; row < mazeMatrix.getRows() - 1; row++) {
        for (int col = 0; col < mazeMatrix.getColumns(); col++) {
            if (mazeMatrix.getHorizontalValue(row, col) == 1) {
                painter.fillRect(col * cellWidth, (row + 1) * cellHeight, cellWidth, 1, Qt::black);
            }
        }
    }

    // отрисовка решения
    if (!solutionPath.isEmpty()) {
        painter.setPen(QPen(Qt::green, 2));

        for (int i = 0; i < solutionPath.size() - 1; ++i) {
            int x1 = (solutionPath[i].x() + 1) * cellWidth - cellWidth / 2;
            int y1 = (solutionPath[i].y() + 1) * cellHeight - cellHeight / 2;

            int x2 = (solutionPath[i + 1].x() + 1) * cellWidth - cellWidth / 2;
            int y2 = (solutionPath[i + 1].y() + 1) * cellHeight - cellHeight / 2;

            painter.drawLine(x1, y1, x2, y2);
        }
    }
}
