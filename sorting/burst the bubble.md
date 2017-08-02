# Burst the Bubble

## Prerequisites
None

## Problem
The below implementation of Bubble sort always runs in $O(n^2)$, even if the initial array is already sorted! Try running the code several times with different inputs, to verify that this is indeed the case (the program will print the number of steps it took to sort the array). Add a couple of lines of code to fix this, using the trick learned in class -- such that, in cases where the given array is already sorted, the best runtime might be $O(n)$!

## Distribution Code
```c
#include <cs50.h>
#include <stdio.h>

int bubblesort(int a[], int n);

int main (void)
{
    // take in array size and elements from user
    printf("please enter array size: ");
    int n = get_int();
    int array[n];
    printf("please enter %i elements, to fill array: \n", n);
    for(int i = 0; i < n; i++)
    {
        array[i] = get_int();
    }
    
    // print unsorted array
    printf("unsorted array is: \n");
    for(int i = 0; i < n; i++)
    {
        printf("%i ", array[i]);
    }
    printf("\n");
    
    // run bubble sort, and print sorted array
    int steps = bubblesort(array, n);
    printf("sorted array is: \n");
    for(int i = 0; i < n; i++)
    {
        printf("%i ", array[i]);
    }
    printf("\nThe number of steps this took was %i\n", steps);
}

// naive implementation of bubble sort
int bubblesort(int a[], int n)
{
    int counter = 0;
    int t = 0;
    // do n - 1 times
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - 1; j++) 
        {
            // if element to right is smaller, swap
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
            counter += 1;
        }
    }
    return counter;
}
```