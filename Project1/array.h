#ifndef ARRAY_H
#define ARRAY_H


#define ARRAY_SIZE 10  /* array size */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void init_array(int *array, int size);
void display_array(int *array, int size);
int sum_array(int *array, int size);
float average_array(int *array, int size);
void reverse_array(int *array, int size);
#endif