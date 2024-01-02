#include "array.h"

/**
 * reverse_array - function to reverse an array
 * @array: pointer to the array
 * @size: size of the array
 *  
 * Return: Nothing
*/

void reverse_array(int *array, int size)
{
  int i, j, temp;

  for (i = size - 1, j = 0; i > j; i--, j++)
        {
      temp = array[i];
      array[i] = array[j];
      array[j] = temp;
        }
  printf("Reversed array: \n");
  display_array(array, size);
    
}