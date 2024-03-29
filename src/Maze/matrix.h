#ifndef MATRIX_H
#define MATRIX_H

#include <algorithm>
#include <cstdlib> // for rand function
#include <cstdlib> // Подключаем библиотеку для работы с функциями, связанными с генерацией случайных чисел
#include <ctime>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <random>
#include <vector>

class Matrix {
private:
  int rows;
  int cols;
  std::vector<std::vector<int>> vertical;
  std::vector<std::vector<int>> horizontal;
  std::vector<std::vector<int>> sets;

public:
  Matrix() : rows(0), cols(0) {}
  Matrix(int numRows, int numCols);
  int getRows() const;
  int getColumns() const;
  int getVerticalValue(int row, int col) const;
  int getHorizontalValue(int row, int col) const;
  int getSetValue(int row, int col) const;
  void checkSetInRow(int i);
  void checkHorizontalInRow(int i);
  void generateMaze();
  void saveMaze(const std::string &fileName) const;
  void loadMaze(const std::string &fileName, const std::string &currentDir);
};

#endif // MATRIX_H
