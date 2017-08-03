# Fix Merge

## Possible Solution
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
    merge_sort(array, 0, n - 1);
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
        merge_sort(a, start, middle);
        merge_sort(a, middle + 1, end);
        merge(a, start, middle, middle + 1, end);
    }
}

void merge(int a[], int start, int mid, int mid_1, int end)
{
    // declare temp array
    int b[end - start + 1];
    
    // iterate through both halves, placing whichever is the higher value into temp array
    int i = 0, j = 0;
    while (start + i <= mid && mid_1 + j <= end)
    {
        if (a[start + i] < a[mid_1 + j])
        {
            b[i + j] = a[start + i];
            i++;
        }
        else
        {
            b[i + j] = a[mid_1 + j];
            j++;
        }
    }
    
    // copy elements from either half that remain, after direct comparison
    while (start + i <= mid)
    {
        b[i + j] = a[start + i];
        i++;
    }
    while (mid_1 + j <= end)
    {
        b[i + j] = a[mid_1 + j];
        j++;
    }
    
    // copy temp array into final array
    for (int k = 0; k < i + j; k++)
    {
        a[start + k] = b[k];
    }
}
```