#!/usr/bin/python3
"""
0-rain
"""


def rain(walls):
    """
    0-rain
    """
    if not walls or len(walls) < 3:
        return 0
    total = 0
    for i in range(1, len(walls)):
        left_max = max(walls[:i+1])
        right_max = max(walls[i:])
        total += min(left_max, right_max) - walls[i]
    return total
