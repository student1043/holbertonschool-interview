#!/usr/bin/python3
"""
Rotate 2D Matrix
"""


def rotate_2d_matrix(matrix):
    """
    Rotation
    """
    for i in range(len(matrix)):
        for j in range(i + 1, len(matrix)):
            matrix[j][i], matrix[i][j] = matrix[i][j], matrix[j][i]
    for row in matrix:
        row.reverse()
