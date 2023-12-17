#include "main.h"

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Return: Always 0 (success)
 */

int main(int argc, __attribute__((unused))char *argv[])
{
int a, b;

do
{
printf("Enter two values you want to swap (separated by space: ");


// Read user input
if (scanf("%d %d", &a, &b) != 2)
{
printf("Invalid input. Please enter two integers.\n");
}

/*while (argc != 3);*/

/*printf("a = %d, b = %d\n", a, b);*/

int *ptr_a = &a, *ptr_b = &b;

printf("Value of a before swapping: %d\n", a);
printf("Value of b before swapping: %d\n", b);

swap(&a, &b);
// Alternatively: swap(&a, &b)

printf("Value of a after swapping: %d\n", a);
printf("Value of b after swapping: %d\n", b);

return 0;
}
while(argc <= 1);
}