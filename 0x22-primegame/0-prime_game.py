#!/usr/bin/python3
"""
prime game
"""


def isWinner(x, nums):
    """
    iswinner
    """
    if type(nums) != list and len(nums) != x:
        return None
    maxi = 10000
    b = [1 for x in range(maxi + 1)]
    b[0], b[1] = 0, 0
    ind = 2
    while ind <= 1000:
        if b[ind] == 1:
            y = ind + ind
            while y <= maxi:
                b[y] = 0
                y += ind
        ind += 1
    c = [0 for x in range(maxi + 1)]
    for x in range(2, maxi + 1):
        c[x] = c[x - 1] + b[x]
    if max(nums) == 1:
        return "Maria"
    else:
        if c[max(nums)] % 2 == 1:
            return "Ben"
        else:
            return "Maria"
