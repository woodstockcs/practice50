# Initializations

## Prerequisites
Loops

## Problem
Rewrite the below code, initializing two arrays -- a 1-dimensional array of size 10 ,and a 2-dimensional array of size 30x30. For the 1-D array, please rewrite the current initialization using just 1 line (instead of 4). For the 2-D array, please initialize it such that the element at indexes i,j is of value i*j. Print both arrays, to test your code!

## Distribution Code

```c
#include <cs50.h>
#include <stdio.h>

#define DIM_1 10
#define DIM_2 30

int main(void)
{
    // TODO: Rewrite the below 4 lines using only a single line
    int array[DIM_1];
    for (int i = 0; i < DIM_1; i++)
    {
        array[i] = 0;
    }
    
    // TODO: Set each of the indexes of the below 2D array to the value i*j
    int array_2[DIM_2][DIM_2];

    // TODO: Print out both arrays, to make sure you did everything correctly!
}
```