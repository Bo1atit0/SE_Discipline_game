#include "array.h"






int main() 
{
    int myArray[ARRAY_SIZE];
    int sum, i;

    srand(time(NULL));  /*Seed for random number generation*/
    for (i = 0; i < ARRAY_SIZE; i++)
    {
    myArray[i] = 0;
    }
    /* Initialize and display the array*/
    init_array(myArray, ARRAY_SIZE);
    display_array(myArray, ARRAY_SIZE);
    printf("\n");
    printf("___________\n");
    sum = sum_array(myArray, ARRAY_SIZE);
    printf("Sum: %d\n", sum);
    printf("___________\n");



return (0);
}