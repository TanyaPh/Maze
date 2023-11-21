// MazeController.cpp
#include "MazeController.h"

MazeController::MazeController() : myMatrix(10, 10) {}
MazeController::MazeController(int numRows, int numCols) : myMatrix(numRows, numCols) {}

void MazeController::generateMaze() {
    myMatrix.generateMaze();
    myMatrix.saveMaze("awd.txt");
}

void MazeController::generateMaze(int numRows, int numCols) {
    myMatrix.generateMaze(numRows, numCols);
    myMatrix.saveMaze("awd.txt");
}

std::vector<std::vector<int>> MazeController::solveMaze(std::pair<int, int> src, std::pair<int, int> dest) {
    std::ifstream file("awd.txt");
    if (!file.is_open()) {
        std::cerr << "Error: File 'awd.txt' not found.\n";
        std::vector<std::vector<int>> path(0, std::vector<int>(0));
        return path;
    }
    mazeSolver.parseMaze("awd.txt");
    return mazeSolver.findPath(src, dest);
}

void MazeController::saveMatrixToFile(const std::string& fileName) {
    myMatrix.saveMaze(fileName);
}

const Matrix& MazeController::getMatrix() const {
    return myMatrix;
}
