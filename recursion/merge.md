# Fix Merge

## Prerequisites
Loops; Functions; Arrays.

## Problem
The below implementation of <code>merge_sort</code> is missing, save for some pseudocode. Following what you learned in class, implement the algorithm so that it works properly! You can test with the following arrays: <code>a = {2, 17, 4, 0, 23, 6}</code>, <code>a = {6, 5, 4, 3, 2}</code>, <code>a = {56, 0, 14, 0, 3, 35, 38, 8, 10}</code>.

## Distribution Code
```c
#include <cs50.h>
#include <stdio.h>

void merge(int a[], int start, int mid, int mid_1, int end);
void merge_sort(int a[], int start, int end);

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
    
    // run merge sort, and print sorted array
    merge_sort(array, n);
    printf("sorted array is: \n");
    for(int i = 0; i < n; i++)
    {
        printf("%i ", array[i]);
    }
    printf("\n");
}

// incomplete implementation of merge sort
void merge_sort(int a[], int start, int end)
{    
    if (end > start)
    {
        int middle = (start + end) / 2;
        sort(array, start, middle);
        sort(array, middle + 1, end);
        merge(array, start, middle, middle + 1, end);
    }
}

void merge(int a[], int start, int mid, int mid_1, int end)
{
    
}
```