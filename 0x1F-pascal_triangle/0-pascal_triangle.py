#!/usr/bin/python3
"""
0-pascal_triangle
"""


def pascal_triangle(n):
    """ Pascal's Triangle, this will return a list depending
        on the height n
    """
    Pascal = []
    if n <= 0:
        return Pascal

    temp_list = []
    for i in range(1, n + 1):
        for j in range(i):
            if j == 0:
                temp_list.append(1)
            elif j == i - 1:
                temp_list.append(1)
            else:
                temp_list.append(Pascal[i-2][j]+Pascal[i-2][j-1])
        Pascal.append(temp_list)
        temp_list = []

    return Pascal
