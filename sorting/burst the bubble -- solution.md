# Burst the Bubble

## Possible Solution
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
    int swaps = 0;
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
                swaps += 1;
            }
            counter += 1;
        }
        // if no swaps were made in this iteration through the array, break
        if (swaps == 0)
        {
            break;
        }
    }
    return counter;
}
```