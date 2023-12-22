#!/usr/bin/python3

"""A Python program that
Calculates the factorial of
Any given number
"""


def factorial(n):
    # factorial of 0 and 1 is 1
    if (n == 0 or n == 1):
          return 1
    res = n * (n - 1)
   # loop will start from (n - 2), and end at 1, and will be decremented by -1 in every iteration 
    for i in range((n - 2), 0, -1):
          res *= i
    return res