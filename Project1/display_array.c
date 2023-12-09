#include "array.h"

/**
 * init_array - function to initialize array
 * @arr: pointer to the array
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
for (i = 0; i < size; i++)
{
   printf("%d", array[i]);
   if (i != (size - 1))
   {
    printf(", ");
   }
}
printf("]");
}