#!/usr/bin/python3
"""
Making Change
"""


def makeChange(coins, total):
    """ Given a pile of coins of different values,
    determine the fewest number of coins needed to meet a given amount total
    """
    MAX = float("inf")
    dp = [0] + [MAX for i in range(total)]
    for i in range(1, total+1):

        smallest = MAX

        for coin in coins:

            if i - coin >= 0:

                if dp[i-coin] < smallest:

                    smallest = dp[i-coin] + 1

        dp[i] = smallest

    return dp[-1] if dp[-1] != MAX else -1
