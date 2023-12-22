#!/usr/bin/python3

"""
This script defines a class Integers
that contains methods related to working with integers,
particularly printing an integer and
finding its largest prime factor.
"""


class Integers():
    """
    A class to perform operations on integers.
    """
    def __init__(self, number):
        """
        initialize an instance of the Integers class with a given number.
        """
        self.number = number

    def print_number(self):
        """
        Method to print the stored number.
        """
        print("Integer = {}\n".format(self.number))

    def prime_factor(self):
        """
        Method to find the largest prime factor of the stored number.
        """
        i = 2
        while i * i <= self.number:
            if self.number % i == 0:
                self.number //= i
            else:
                i += 1
        print("Largest prime factor of Integer = {}\n".format(self.number))


number = int(input("Enter a number: "))
integers = Integers(number)
integers.print_number()
integers.prime_factor()
