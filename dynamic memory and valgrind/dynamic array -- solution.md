# Dynamic Array

## Possible Solution
```c
#include <stdio.h>
#include <cs50.h>

#define SIZE 4

int main(void)
{
    // declare static array, allocate memory for dynamic array, and 'fill' them both
    int array_static[SIZE];
    int *array_dynamic = malloc(SIZE * sizeof(int));
    printf("please enter %i ints below:\n", SIZE);
    for (int i = 0; i < SIZE; i++)
    {
        int x = get_int();
        array_static[i] = x;
        array_dynamic[i] = x;
    }
    for (int i = 0; i < SIZE; i++)
    {
        printf("static: %d\tdynamic, %p: %d\n", array_static[i], array_dynamic + i, array_dynamic[i]);
    }
    
    // allocate additional memory, using realloc(), so that the new dynamic array is twice as large    
    printf("please enter an additional %i ints below:\n", SIZE);
    array_dynamic = realloc(array_dynamic, SIZE * 2 * sizeof(int));
    
    // fill up new 'slots' in array
    for (int i = SIZE; i < SIZE * 2; i++)
    {
        array_dynamic[i] = get_int();
    }
    
    // print new elements in array
    for (int i = 0; i < SIZE * 2; i++)
    {
        printf("dynamic, %p: %d\n", array_dynamic + i, array_dynamic[i]);
    }
    
    // free memory allocated
    free(array_dynamic);
}
```