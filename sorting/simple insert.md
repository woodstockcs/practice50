# Simple Insert

## Prerequisites
Loops; Functions; Arrays.

## Problem
In the below code, an input of one float value from the user is appended to the left of a sorted array. Shift it to the correct position in the array, so that the entire array is sorted correctly.

## Distribution Code
```c
#include <cs50.h>
#include <stdio.h>

#define SIZE 7

void insertion_sort(int a[], int n);

int main (void)
{
    // declare array, and take in input from user
    float array[SIZE] = {0.0, -3.5, 5.6, 7.0, 8.25, 9.67, 18.3};
    printf("please enter float value to insert into the array: ");
    array[0] = get_float();
    
    // print array before moving new element into correct position
    printf("unsorted array is: \n");
    for(int i = 0; i < SIZE; i++)
    {
        printf("%.2f ", array[i]);
    }
    printf("\n");
    
    // TODO: move element into correct position
    
    // print array after moving new element into correct position
    printf("sorted array is: \n");
    for(int i = 0; i < SIZE; i++)
    {
        printf("%.2f ", array[i]);
    }
    printf("\n");
}
```