#!/usr/bin/python3
"""
prime game
"""


def isWinner(x, nums):
    """
    iswinner
    """
    p = [0] * 11 ** 5
    pr = [0] * 11 ** 5
    k = 0
    for i in range(2, 11 ** 5):
        if p[i] == 0:
            k += 1
            for j in range(i, 11 ** 5, i):
                p[j] = 1
        pr[i] = k
    if pr[max(nums)] % 2 == 0:
        return "Maria"
    else:
        return "Ben"
