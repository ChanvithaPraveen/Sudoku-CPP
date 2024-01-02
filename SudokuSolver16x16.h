#ifndef SUDOKUSOLVER16X16_H
#define SUDOKUSOLVER16X16_H

#include <vector>
#include <string>
#include <iostream>
#include <fstream>

class SudokuSolver16x16 {
public:
    SudokuSolver16x16();

    bool heuristicSolve();
    bool loadBoard(const std::string& filename);
    bool saveBoard(const std::string& filename);
    void printBoard(std::ostream& os = std::cout) const;

private:
    const int SIZE = 16;
    const int SQRT_SIZE = 4;
    std::vector<std::vector<int>> board;
    std::vector<std::vector<bool>> rowUsed, colUsed, boxUsed;

    bool isSafe(int row, int col, int num) const;
    bool findBestUnassignedLocation(int &row, int &col);
    int countOptions(int row, int col) const;
    void placeNum(int row, int col, int num);
    void removeNum(int row, int col, int num);
};

#endif // SUDOKUSOLVER16X16_H
