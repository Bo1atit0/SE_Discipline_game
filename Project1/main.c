#include "array.h"






int main() {
    srand(time(NULL));  // Seed for random number generation
    int myArray[ARRAY_SIZE];

    // Initialize and display the array
    init_array(myArray, ARRAY_SIZE);
    display_array(myArray, ARRAY_SIZE);

return (0);
}