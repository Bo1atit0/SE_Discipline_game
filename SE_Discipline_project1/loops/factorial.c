#include "loops.h"

/**
* factorial - Calculate the factorial of a number.
* @n: The number for which to calculate the factorial.
*
* Return: The factorial of the given number, or -1 if undefined.
*/

int factorial(int n)
{
int i, res;
if (n < 0)
{
return (-1);
}
if (n == 0 || n == 1)
{
return (1);
}
res = n * (n - 1);
for (i = (n - 2); i > 1; i--)
{
res *= i;
}
return (res);
}
  