#!/usr/bin/python3
"""
0-pascal_triangle
"""
def pascal_triangle(n):
    pascal = []
    if n <= 0:
        return pascal
    tree = [[1]]
    for x in range(1, n):
        pascal = [1]
        for y in range(1, x):
            pascal.append(tree[x-1][y-1] + tree[x-1][y])
        pascal.append(1)
        tree.append(pascal)
    return tree
