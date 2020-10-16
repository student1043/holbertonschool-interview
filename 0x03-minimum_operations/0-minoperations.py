#!/usr/bin/python3
"""
Minimum Operations
"""

def minOperations(n):
    """Min OP"""
    counter = 2
    operations = 0
    while n > 1:
        while n % counter == 0:
            operations += counter
            n = n // counter
        counter += 1
    return operations
