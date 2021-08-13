#!/usr/bin/python3
""" N Queens """
import sys


def isValid(chess, row, pos):
    """ Validating That The Queen Placement is Correct """
    for i in range(row):
        if(chess[i] == pos):
            return False
        if(chess[i] + row - i == pos):
            return False
        if(chess[i] + i - row == pos):
            return False
    return True


def SetChess(chess, row):
    """ Setting the Chessboard Up """
    for pos in range(len(chess)):
        if isValid(chess, row, pos):
            chess[row] = pos
            if row < len(chess) - 1:
                SetChess(chess, row + 1)
            else:
                print([[pos, chess[pos]] for pos in range(len(chess))])


if len(sys.argv) != 2:
    print("Usage: nqueens N")
    exit(1)
if not sys.argv[1].isdigit():
    print("N must be a number")
    exit(1)
if int(sys.argv[1]) < 4:
    print("N must be at least 4")
    exit(1)

chess = [-1 for i in range(int(sys.argv[1]))]
SetChess(chess, 0)
