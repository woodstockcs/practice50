# Sigma

## Prerequisites
Conditions; Functions

## Problem
Write a recursive function called sigma with a prototype of <code>int sigma (int n);</code> that adds the numbers 1 through n and returns the sum. Example output:
```c    
jharvard@run.cs50.net (~): ./a.out
Enter a positive integer: 5
The result of sigma(5) is 15
```


## Distribution Code
```c
#include <cs50.h>
#include <stdio.h>

int sigma(int n);

int main (void)
{
    // take in array size and elements from user
    printf("please enter an integer value: ");
    int n = get_int();
    
    // print the result
    printf("The result of sigma(%i) is %i", n, sigma(n));
}

// TODO: implement sigman recursively
int sigma(int n)
{
    // TODO: base case

    // TODO: recursive case
}
```