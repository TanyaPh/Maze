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

TEST(MatrixTest, GenerateMaze1) {
  Matrix matrix(3, 3);
  matrix.generateMaze();

  EXPECT_EQ(matrix.getRows(), 3);
  EXPECT_EQ(matrix.getColumns(), 3);

  EXPECT_EQ(matrix.getVerticalValue(2, 1), 0);
  EXPECT_EQ(matrix.getHorizontalValue(2, 2), 0);

  for (int i = 0; i < matrix.getRows(); ++i) {
    for (int j = 0; j < matrix.getColumns(); ++j) {
      if (!(i == 2 && j == 1) && !(i == 2 && j == 2)) {
        EXPECT_TRUE(matrix.getVerticalValue(i, j) == 0 || matrix.getVerticalValue(i, j) == 1);
        EXPECT_TRUE(matrix.getHorizontalValue(i, j) == 0 || matrix.getHorizontalValue(i, j) == 1);
      }
    }
  }
}

TEST(MatrixTest, GenerateMaze3) {
        Matrix matrix(2, 2);
        matrix.generateMaze();

        EXPECT_EQ(matrix.getRows(), 2);
        EXPECT_EQ(matrix.getColumns(), 2);

        for (int i = 0; i < matrix.getRows(); ++i) {
            for (int j = 0; j < matrix.getColumns(); ++j) {
                EXPECT_TRUE(matrix.getVerticalValue(i, j) == 0 || matrix.getVerticalValue(i, j) == 1);
                EXPECT_TRUE(matrix.getHorizontalValue(i, j) == 0 || matrix.getHorizontalValue(i, j) == 1);
            }
        }
    }

    TEST(MatrixTest, GenerateMaze4) {
        Matrix matrix(4, 6);
        matrix.generateMaze();

        EXPECT_EQ(matrix.getRows(), 4);
        EXPECT_EQ(matrix.getColumns(), 6);

        for (int i = 0; i < matrix.getRows(); ++i) {
            for (int j = 0; j < matrix.getColumns(); ++j) {
                EXPECT_TRUE(matrix.getVerticalValue(i, j) == 0 || matrix.getVerticalValue(i, j) == 1);
                EXPECT_TRUE(matrix.getHorizontalValue(i, j) == 0 || matrix.getHorizontalValue(i, j) == 1);
            }
        }
    }

   TEST(MatrixTest, GenerateMaze5) {
        Matrix matrix(1, 1);
        matrix.generateMaze();

        EXPECT_EQ(matrix.getRows(), 1);
        EXPECT_EQ(matrix.getColumns(), 1);

        EXPECT_TRUE(matrix.getVerticalValue(0, 0) == 0 || matrix.getVerticalValue(0, 0) == 1);
        EXPECT_TRUE(matrix.getHorizontalValue(0, 0) == 0 || matrix.getHorizontalValue(0, 0) == 1);
    }

    TEST(MatrixTest, GenerateMaze6) {
        Matrix matrix(3, 3);
        matrix.generateMaze();

        EXPECT_EQ(matrix.getRows(), 3);
        EXPECT_EQ(matrix.getColumns(), 3);

        EXPECT_EQ(matrix.getVerticalValue(2, 1), 0);
        EXPECT_EQ(matrix.getHorizontalValue(2, 2), 0);

        for (int i = 0; i < matrix.getRows(); ++i) {
            for (int j = 0; j < matrix.getColumns(); ++j) {
                if (!(i == 2 && j == 1) && !(i == 2 && j == 2)) {
                    EXPECT_TRUE(matrix.getVerticalValue(i, j) == 0 || matrix.getVerticalValue(i, j) == 1);
                    EXPECT_TRUE(matrix.getHorizontalValue(i, j) == 0 || matrix.getHorizontalValue(i, j) == 1);
                }
            }
        }
    }

    TEST(MatrixTest, GenerateMaze9) {
        Matrix matrix(3, 5);
        matrix.generateMaze();

        EXPECT_EQ(matrix.getRows(), 3);
        EXPECT_EQ(matrix.getColumns(), 5);

        for (int i = 0; i < matrix.getRows(); ++i) {
            for (int j = 0; j < matrix.getColumns(); ++j) {
                EXPECT_TRUE(matrix.getVerticalValue(i, j) == 0 || matrix.getVerticalValue(i, j) == 1);
                EXPECT_TRUE(matrix.getHorizontalValue(i, j) == 0 || matrix.getHorizontalValue(i, j) == 1);
            }
        }
    }

    TEST(MatrixTest, GenerateMaze10) {
        Matrix matrix(100, 100);
        matrix.generateMaze();

        EXPECT_EQ(matrix.getRows(), 100);
        EXPECT_EQ(matrix.getColumns(), 100);

        for (int i = 0; i < matrix.getRows(); ++i) {
            for (int j = 0; j < matrix.getColumns(); ++j) {
                EXPECT_TRUE(matrix.getVerticalValue(i, j) == 0 || matrix.getVerticalValue(i, j) == 1);
                EXPECT_TRUE(matrix.getHorizontalValue(i, j) == 0 || matrix.getHorizontalValue(i, j) == 1);
            }
        }
    }

    // TEST(MatrixTest, GenerateMaze) {
    //     Matrix matrix(55, 60);

    //     EXPECT_THROW(matrix.generateMaze(), std::runtime_error);

    //     try {
    //         matrix.generateMaze();
    //     } catch (const std::runtime_error& e) {
    //         EXPECT_STREQ(e.what(), "Invalid matrix size: maximum allowed size is 50x50");
    //     }
    // }
  

TEST(MatrixTest, GenerateMaze2) {
    int numRows = 10;
    int numCols = 10;
    Matrix matrix(numRows, numCols);
    matrix.generateMaze();

    bool is_right = false;
    bool is_bottom = false;

    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            if (matrix.getVerticalValue(i, j) == 1  || matrix.getVerticalValue(i, j) == 0) {
                is_bottom = true;
            }
            if (matrix.getHorizontalValue(i, j) == 1 || matrix.getHorizontalValue(i, j) == 0) {
                is_right = true;
            }
        }
    }

    ASSERT_TRUE(is_bottom);
    ASSERT_TRUE(is_right);
    std::string path = "examples/generatedInTest.txt";
    matrix.saveMaze(path);
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

TEST(MatrixTest, LoadMazeInvalidData) {
    Matrix matrix;
    ASSERT_THROW(matrix.loadMaze("examples/invalid_data_maze.txt"), std::runtime_error);
    ASSERT_EQ(matrix.getRows(), 0);
    ASSERT_EQ(matrix.getColumns(), 0);
}

int main(int argc, char** argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}


