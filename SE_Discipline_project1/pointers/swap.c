#include "main.h"

/**
* swap - swaps the values of two integers
* @a: first integer
* @b: second integer
*/

int swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;

  return (0);
}