#!/usr/bin/python3
"""
0-rain
"""


def rain(walls):
    """
    0-rain
    """
    total = 0
    if not walls:
        return 0
    for i in range(1, len(walls) - 1):
        left = walls[i]
        for j in range(1, i):
            left = max(left, walls[j])
        right = walls[i]
        for j in range(i + 1, len(walls)):
            right = max(right, walls[j])
        total += min(left, right) - walls[i]
    return total
