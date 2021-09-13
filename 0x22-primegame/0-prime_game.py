#!/usr/bin/python3
"""
prime game
"""


def isWinner(x, nums):
    """
    iswinner
    """
    N = 10 ** 5 + 10
    d = {i: True for i in range(2, N)}
    c = {i: 0 for i in range(N)}
    i = 2
    while i * i <= N:
        if d[i]:
            j = i * i
            while j < N:
                d[j] = False
                j += i
        i += 1
    for i in range(1, N - 1):
        c[i + 1] = c[i]
        if d[i + 1]:
            c[i + 1] += 1
    if c[max(nums)] % 2:
        return "Ben"
    else:
        return "Maria"
