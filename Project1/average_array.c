#include "array.h"

/**
 * average_array - function to calculate the average of an array
 * @array: pointer to the array
 * @size: size of the array
 *  
 * Return: Nothing
*/

float average_array(int *array, int size)
{
  int sum = 0;
  float average = 0;
  sum = sum_array(array, size);
  average = (float)sum / (float)size;
  return (average);
}

