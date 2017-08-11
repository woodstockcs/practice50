# Simple Fix

## Prerequisites
Pointers

## Problem
Fix the error in the below code, using <code>malloc()</code>. Don't forget to use valgrind to make sure you <code>free</code>-d all memory allocated!

## Distribution Code
```c
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int* y;
    *y = 14;
    printf("The value y is pointing at is %i\n", *y);
}
```