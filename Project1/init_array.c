#include "array.h"

/**
 * init_array - function to initialize array
 * @array: pointer to the array
 * @size: size of the array
 *  
 * Return: Nothing
*/

void init_array(int *array, int size)
{
    /*variable for iterating*/
int i;

for (i = 0; i < size; i++)
{
    /*generate random numbers from 1 - 99*/
    array[i] = rand() % 100;
    /*printf("%d\n", arr[i]);*/
}
}