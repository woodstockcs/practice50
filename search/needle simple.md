# Needle in a Haystack

## Prerequisites
Loops, Conditions, Arrays, Functions

## Problem
Write a function called search with a prototype of <code>bool search(int needle, int haystack[], int size);</code> that uses <strong>binary search</strong> to determine whether a needle is in haystack. Return <code>true</code> if needle is found and <code>false</code> otherwise. Example output:

```c
jharvard@run.cs50.net (~): ./a.out
> 4
YES
```

Note: this is the simpler version of this question, with more of the implementation details filled in the implementation code

## Distribution Code

```c
#include <cs50.h>
#include <stdio.h>

#define SIZE 8

bool search(int needle, int haystack[], int size)
{
    // iterative implementation
    int start = 0;
    int end = size - 1; 
    int mid;
    while (start <= end)
    {
        mid = (start + end) / 2;
        // TODO: -- Handle 3 cases: the value of the needle being smaller than, equal to, and larger than the value of the middle element in the array
    }
    return false;
}

int main(void)
{
    int numbers[SIZE] = { 4, 8, 15, 16, 23, 42, 50, 108 };
    printf("> ");
    int n = get_int();
    if (search(n, numbers, SIZE))
    {
        printf("YES\n");
    }
    else 
    {
        printf("NO\n");
    }
}
```