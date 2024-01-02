#include "array.h"






int main() 
{
    int myArray[ARRAY_SIZE];
    int sum, i;
    float average;

    srand(time(NULL));  /*Seed for random number generation*/
    for (i = 0; i < ARRAY_SIZE; i++)
    {
    myArray[i] = 0;
    }
    /* Initialize and display the array*/
    init_array(myArray, ARRAY_SIZE);
    printf("Array: \n");
    display_array(myArray, ARRAY_SIZE);
    printf("\n");
    printf("___________\n");
    sum = sum_array(myArray, ARRAY_SIZE);
    printf("Sum: %d\n", sum);
    printf("___________\n");
    average = average_array(myArray, ARRAY_SIZE);
    printf("Average: %.2f\n", average);
    printf("___________\n");
    reverse_array(myArray, ARRAY_SIZE);
    printf("\n___________\n");
  



return (0);
}