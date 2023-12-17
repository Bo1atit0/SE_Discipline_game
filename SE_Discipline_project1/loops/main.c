#include "loops.h"

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Return: Always 0 (success)
 */

int main(int argc, __attribute__((unused))char *argv[]) 
{
    // Test the factorial function
do
  {
    int num, result;

    printf("Enter a number to calculate its factorial: ");
    if (scanf("%d", &num) != 1)
    {
      fprintf(stderr, "Error: Invalid input\n");
    }

    result = factorial(num);

    if (result == -1) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("The factorial of %d is: %d\n", num, result);
    }

    return 0;
}
while (argc == 1);
}

