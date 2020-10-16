#!/usr/bin/python3
"""
Minimum Operations
"""

def minOperations(n):
    """Min OP"""
    if n <= 1:
        return 0
    for counter in range(2, n + 1):
        if n % 1 == 0:
            return minOperations(n // counter) + counter
