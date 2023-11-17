#include "matrix.h"
#include <cstdlib> // for rand function
#include <cstdlib>   // Подключаем библиотеку для работы с функциями, связанными с генерацией случайных чисел
#include <ctime>

Matrix::Matrix(int numRows, int numCols) : rows(numRows), cols(numCols) {
    vertical.resize(rows + 1, std::vector<int>(cols, 0));
    horizontal.resize(rows, std::vector<int>(cols + 1, 0));
}

int Matrix::getRows() const {
    return rows;
}

int Matrix::getColumns() const {
    return cols;
}

int Matrix::getVerticalValue(int row, int col) const {
    if (row >= 0 && row <= rows && col >= 0 && col < cols) {
        return vertical[row][col];
    } else {
        std::cout << "Некорректные индексы для вертикальной стенки" << std::endl;
        return 0; // можно вернуть какое-то значение по умолчанию
    }
}

int Matrix::getHorizontalValue(int row, int col) const {
    if (row >= 0 && row < rows && col >= 0 && col <= cols) {
        return horizontal[row][col];
    } else {
        std::cout << "Некорректные индексы для горизонтальной стенки" << std::endl;
        return 0; // можно вернуть какое-то значение по умолчанию
    }
}

void Matrix::generateMaze() {
    srand(static_cast<unsigned>(time(0)));

    // Initialize each cell as a separate set
    for (int row = 0; row < rows; ++row) {
        for (int col = 0; col < cols; ++col) {
            vertical[row][col] = 1;  // Initially, set all vertical walls
            horizontal[row][col] = 1; // Initially, set all horizontal walls
        }
    }

    for (int row = 0; row < rows - 1; ++row) {
        // Create horizontal connections within a row
        for (int col = 0; col < cols - 1; ++col) {
            if (rand() % 2 == 0) {
                horizontal[row][col] = 0; // Remove the horizontal wall with 50% probability
            }
        }

        // Create vertical connections between cells in different sets
        for (int col = 0; col < cols; ++col) {
            if (col < cols - 1 && (rand() % 2 == 0 || vertical[row][col] != vertical[row][col + 1])) {
                // Remove the vertical wall if random condition met or different sets
                vertical[row][col] = 0;

                // Merge sets
                int targetSet = vertical[row][col + 1];
                int currentSet = vertical[row][col];
                for (int c = 0; c < cols; ++c) {
                    if (vertical[row][c] == currentSet) {
                        vertical[row][c] = targetSet;
                    }
                }
            }
        }
    }

    // Remove horizontal walls in the last row
    for (int col = 0; col < cols - 1; ++col) {
        if (rand() % 2 == 0 || vertical[rows - 1][col] != vertical[rows - 1][col + 1]) {
            horizontal[rows - 1][col] = 0;
        }
    }
}

