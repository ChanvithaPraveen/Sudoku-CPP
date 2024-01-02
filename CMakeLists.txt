cmake_minimum_required(VERSION 3.26)
project(1)

set(CMAKE_CXX_STANDARD 17)

add_executable(1 main.cpp
        SudokuSolver9x9.cpp
        SudokuSolver16x16.cpp
        SudokuSolver9x9.h
        SudokuSolver16x16.h
)
