#include <gtest/gtest.h>
#include "../Maze/matrix.h"

TEST(MatrixTest, GenerateMaze) {
    Matrix matrix(5, 5);

    matrix.generateMaze();
    EXPECT_EQ(matrix.getRows(), 5);
    EXPECT_EQ(matrix.getColumns(), 5);

    for (int i = 0; i < matrix.getRows(); ++i) {
        for (int j = 0; j < matrix.getColumns(); ++j) {
            EXPECT_TRUE(matrix.getVerticalValue(i, j) == 0 || matrix.getVerticalValue(i, j) == 1);
            EXPECT_TRUE(matrix.getHorizontalValue(i, j) == 0 || matrix.getHorizontalValue(i, j) == 1);
        }
    }
}

TEST(MatrixTest, LoadMazeSuccess) {
    Matrix matrix;
    ASSERT_NO_THROW(matrix.loadMaze("examples/4x4.txt"));
    
    ASSERT_EQ(matrix.getRows(), 4);
    ASSERT_EQ(matrix.getColumns(), 4);
    ASSERT_EQ(matrix.getVerticalValue(0, 0), 0);
    ASSERT_EQ(matrix.getHorizontalValue(0, 0), 1);
}

TEST(MatrixTest, LoadMazeInvalidFormat) {
    Matrix matrix;
    ASSERT_THROW(matrix.loadMaze("examples/invalid_format_maze.txt"), std::runtime_error);
    ASSERT_EQ(matrix.getRows(), 0);
    ASSERT_EQ(matrix.getColumns(), 0);
}

int main(int argc, char** argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}


