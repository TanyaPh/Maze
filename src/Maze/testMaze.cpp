#include <gtest/gtest.h>
#include "matrix.h"


TEST(test_generate_maze, test_generate_maze_properties) {
    Matrix testMaze(10, 10);

    int height = 10;
    int width = 10;

    Matrix generatedMaze(height, width);
    generatedMaze.generateMaze();

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            int value = generatedMaze.getVerticalValue(i, j);
            ASSERT_TRUE(value == 0 || value == 1);
        }
    }

    for (int i = 0; i < height; i++) {
        ASSERT_EQ(generatedMaze.getVerticalValue(i, 0), 1);
        ASSERT_EQ(generatedMaze.getVerticalValue(i, width - 1), 1);
    }

    for (int j = 0; j < width; j++) {
        ASSERT_EQ(generatedMaze.getVerticalValue(0, j), 1);
        ASSERT_EQ(generatedMaze.getVerticalValue(height - 1, j), 1);
    }

}
