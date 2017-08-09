# Swap

## Prerequisites
Functions

## Problem
Implement a swap function with prototype <code>void swap(int* a, int* b)</code> that swaps the values using pointers. Example output:
```c
jharvard@run.cs50.net (~): ./a.out
x is 1
y is 2
Swapping...
Swapped!
x is 2
y is 1
```

## Distribution Code
```c
#include <cs50.h>
#include <stdio.h>

void swap(int* a, int* b);

int main(void)
{
    // get input from user
    printf("please enter value of x: ");
    int x = get_int();
    printf("please enter value of y: ");
    int y = get_int();
    
    // swap and print
    printf("x is %i\n", x);
    printf("y is %i\n", y);
    printf("Swapping...\n");
    swap(&x, &y);
    printf("Swapped!\n");
    printf("x is %i\n", x);
    printf("y is %i\n", y);
    
}

void swap(int* a, int* b)
{
    // TODO
}
```