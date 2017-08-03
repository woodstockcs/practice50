# Fix Factorial

## Prerequisites
Conditions; Functions

## Problem
The below is a recursive implementation of <code>factorial</code>, a function that takes in an integer, <code>n</code>, and returns its factorial. Example output:
```c    
jharvard@run.cs50.net (~): ./a.out
Enter a positive integer: 4
The result of factorial(4) is 24
```
However, this implementation is broken, and seems to segfault! Fix it, by reminding yourself what the two essential components are in a recursive function.

## Distribution Code
```c
#include <cs50.h>
#include <stdio.h>

int factorial(int n);

int main (void)
{
    // take in array size and elements from user
    printf("please enter an integer value: ");
    int n = get_int();
    
    // print the result
    printf("The result of factorial(%i) is %i\n", n, factorial(n));
}

// TODO: fix factorial
int factorial(int n)
{
    return (n * factorial(n - 1));
}
```