//#ifndef SUDOKUSOLVER9X9_H
//#define SUDOKUSOLVER9X9_H
//
//#include <vector>
//#include <string>
//#include <iostream>
//#include <fstream>
//
//class SudokuSolver9x9 {
//public:
//    SudokuSolver9x9();
//
//    bool heuristicSolve();
//    bool loadBoard(const std::string& filename);
//    bool saveBoard(const std::string& filename);
//    void printBoard(std::ostream& os = std::cout) const;
//
//private:
//    static const int SIZE = 9;
//    static const int SQRT_SIZE = 3;
//    std::vector<std::vector<int>> board;
//    std::vector<std::vector<bool>> rowUsed, colUsed, boxUsed;
//
//    bool isSafe(int row, int col, int num) const;
//    bool findBestUnassignedLocation(int &row, int &col);
//    int countOptions(int row, int col) const;
//    void placeNum(int row, int col, int num);
//    void removeNum(int row, int col, int num);
//};
//
//#endif // SUDOKUSOLVER9X9_H
