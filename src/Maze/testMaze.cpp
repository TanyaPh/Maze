#include <gtest/gtest.h>
#include "mazeSolver.h"

TEST(MazeSolverTest, ValidPathFound) {
    MazeSolver mazeSolver;
    std::vector<std::vector<int>> wave = { { -1, -1, -1, -1 },
                                          { -1, -1, -1, -1 },
                                          { -1, -1, -1, -1 },
                                          { -1, -1, -1, -1 } };
    std::pair<int, int> src = {0, 0};
    std::pair<int, int> dest = {3, 3};
    ASSERT_NO_THROW(mazeSolver.makeWave(wave, src, dest));
    EXPECT_EQ(wave[dest.first][dest.second], 3);
}

TEST(MazeSolverTest, PathNotFound) {
    MazeSolver mazeSolver;
    std::vector<std::vector<int>> wave = { { -1, -1, -1, -1 },
                                          { -1, -1, -1, -1 },
                                          { -1, -1, -1, -1 },
                                          { -1, -1, -1, -1 } };
    std::pair<int, int> src = {0, 0};
    std::pair<int, int> dest = {3, 3};
    ASSERT_THROW(mazeSolver.makeWave(wave, src, dest), std::string);
}

TEST(MazeSolverTest, ValidPathLength) {
    MazeSolver mazeSolver;
    std::vector<std::vector<int>> wave = { { -1, -1, -1, -1 },
                                          { -1, -1, -1, -1 },
                                          { -1, -1, -1, -1 },
                                          { -1, -1, -1, -1 } };
    std::pair<int, int> src = {0, 0};
    std::pair<int, int> dest = {3, 3};
    ASSERT_NO_THROW(mazeSolver.makeWave(wave, src, dest));
    EXPECT_EQ(wave[dest.first][dest.second], 3);
}

TEST(MazeSolverTest, InvalidSource) {
    MazeSolver mazeSolver;
    std::vector<std::vector<int>> wave = { { -1, -1, -1, -1 },
                                          { -1, -1, -1, -1 },
                                          { -1, -1, -1, -1 },
                                          { -1, -1, -1, -1 } };
    std::pair<int, int> src = {-1, -1};
    std::pair<int, int> dest = {3, 3};
    ASSERT_THROW(mazeSolver.makeWave(wave, src, dest), std::string);
}

TEST(MazeSolverTest, InvalidDestination) {
    MazeSolver mazeSolver;
    std::vector<std::vector<int>> wave = { { -1, -1, -1, -1 },
                                          { -1, -1, -1, -1 },
                                          { -1, -1, -1, -1 },
                                          { -1, -1, -1, -1 } };
    std::pair<int, int> src = {0, 0};
    std::pair<int, int> dest = {4, 4};
    ASSERT_THROW(mazeSolver.makeWave(wave, src, dest), std::string);
}

// TEST(MazeSolverTest, MakePathTestEmptyMaze) {
//     MazeSolver solver;

//     std::vector<std::vector<int>> wave = {};
//     std::pair<int, int> src = std::make_pair(0, 0);
//     std::pair<int, int> dest = std::make_pair(0, 0);
//     std::vector<std::vector<int>> path = solver.makePath(wave, src, dest);
//     ASSERT_TRUE(path.empty());
// }

// TEST(MazeSolverTest, MakePathTestUnreachableDestination) {
//     MazeSolver solver;
//     std::vector<std::vector<int>> wave = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };
//     std::pair<int, int> src = std::make_pair(0, 0);
//     std::pair<int, int> dest = std::make_pair(2, 2);
//     std::vector<std::vector<int>> path = solver.makePath(wave, src, dest);
//     ASSERT_TRUE(path.empty());
// }

// TEST(MazeSolverTest, MakePathTestHorizontalObstacle) {
//     MazeSolver solver;
//     std::vector<std::vector<int>> wave = {
//         {0, 1, 2},
//         {3, 4, 5},
//         {6, 7, 8}
//     };
//     std::pair<int, int> src = std::make_pair(0, 0);
//     std::pair<int, int> dest = std::make_pair(2, 2);
//     std::vector<std::vector<int>> path = solver.makePath(wave, src, dest);
//     std::vector<std::vector<int>> expectedPath = {
//         {0, -1, 2},
//         {3, -1, 5},
//         {6, -1, 8}
//     };
//     ASSERT_EQ(path, expectedPath);
// }
