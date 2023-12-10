#include "array.h"

/**
 * init_array - function to initialize array
 * @array: pointer to the array
 * @size: size of the array
 *  
 * Return: Nothing
*/

void display_array(int *array, int size)
{
int i = 0;

if (array == NULL)
{
    fprintf(stderr, "Array is NULL");
}
if (size == 0)
{
    fprintf(stderr, "size must be greater than 0");
}
 printf("[");
 while (i < size)
 {
    /* code */
   printf("%d", array[i]);
   if (i != (size - 1))
   {
    printf(", ");
   }
   i++;
}
printf("]");
}