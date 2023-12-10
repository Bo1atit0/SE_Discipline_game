#include "array.h"

/**
 * sum_array - function to initialize array
 * @array: pointer to the array
 * @size: size of the array
 *  
 * Return: Nothing
*/

int sum_array(int *array, int size)
{
    int i = 0, sum = 0;

    if (array == NULL)
    {
        fprintf(stderr, "Array is NULL");
        
    }
    if (size == 0)
    {
        fprintf(stderr,"Size is 0");
        
    }

    do
    {
        /* code */
        sum += array[i];
        i++;
    } 
    while (i < size);

    return (sum);
    
}