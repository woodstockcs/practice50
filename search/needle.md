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

Tip: it might be easier to implement this <strong>iteratively</strong>, rather than <strong>recursively</strong>.

## Distribution Code

```c
#include <cs50.h>
#include <stdio.h>

#define SIZE 8

bool search(int needle, int haystack[], int size)
{
	// TODO
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