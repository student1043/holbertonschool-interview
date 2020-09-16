#!/usr/bin/python3
"""
Minimum Operations
"""

def minOperations(n):
    """Min OP"""
    i = 1
    counter = 0
    copyall = 0
    if n < 2:
        return 0
    while n is not i:
        