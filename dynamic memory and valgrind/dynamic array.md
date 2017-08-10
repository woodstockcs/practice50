# Dynamic Array

## Prerequisites
Pointers; Loops

## Problem
One of the neat things about dynamic memory is it is, well, dynamic. If a dynamically-allocated array fills up, for instance, you can allocate more memory and 'extend' it -- which is what you will be asked to do in the code below. The memory used by an array needs to be contiguous, so you might want to look up the function <code>realloc()</code>, which takes not only the size to allocate, but the address in memory at which to begin. Example output:

```c
jharvard@run.cs50.net (~): ./a.out
please enter 4 ints below:
1
2
3
4
static: 1       dynamic, 0x142d010: 1
static: 2       dynamic, 0x142d014: 2
static: 3       dynamic, 0x142d018: 3
static: 4       dynamic, 0x142d01c: 4
please enter an additional 4 ints below:
5
6
7
8
dynamic, 0x142d100: 1
dynamic, 0x142d104: 2
dynamic, 0x142d108: 3
dynamic, 0x142d10c: 4
dynamic, 0x142d110: 5
dynamic, 0x142d114: 6
dynamic, 0x142d118: 7
dynamic, 0x142d11c: 8
```
Don't forget to use valgrind to make sure you <code>free</code>-d all memory allocated!

## Distribution Code
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
    
    // TODO: allocate additional memory, using realloc(), so that the new dynamic array is twice as large
    // be sure it start at the same address in memory, so you can easily free it afterwards!
    printf("please enter an additional %i ints below:\n", SIZE);


    // TODO: fill up new 'slots' in array with input from user
    

    // print new elements in array
    for (int i = 0; i < SIZE * 2; i++)
    {
        printf("dynamic, %p: %d\n", array_dynamic + i, array_dynamic[i]);
    }
    
    // TODO: free memory allocated
}
```