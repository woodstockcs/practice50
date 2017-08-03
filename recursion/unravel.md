# Unravel

## Prerequisites
Conditions; Functions

## Problem
Consider the code below. When does it print <code>True!</code>, and when does it print <code>'False!'</code>? Rewrite it with no helper functions, and unrecursively, such that it still prints the same thing for any integer input from the user.

## Distribution Code
```c
#include <cs50.h>
#include <stdio.h>

bool f_1 (unsigned int n);
bool f_2 (unsigned int n);
bool f_3 (unsigned int n);

int main(void)
{
    printf("Please enter a positive integer value: \n");
    int n = get_int();
    if (f_1(n))
    {
        printf("True!\n");
    }
    else
    {
        printf("False!\n");
    }
}

bool f_1 (unsigned int n)
{
    return (n == 0) ? true: f_2(n - 1);
}

bool f_2 (unsigned int n)
{
    return (n == 0) ? false : f_3(n - 1);
}

bool f_3 (unsigned int n)
{
    return (n == 0) ? false : f_1(n - 1);
}
```