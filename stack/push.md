# Push

## Prerequisites
Loops; Functions; Arrays; Structures

## Problem
In the below code, a stack <code>struct</code> has been implemented for you. It contains an <code>array</code> of size <code>CAPACITY</code> and an array of strings. Implement the <code>push()</code> function, per the specification below, which will put a new element into the stack onto the "top" of the data structure so that it will be retrived prior to the elements
already in the stack (unless the stack is already at CAPACITY). The <code>main</code> function that will be testing your implementation has already been written for you.

Expected output:
```c
jharvard@run.cs50.net (~): ./a.out
Pushing 10 strings onto the stack...
0
1
2
3
4
5
6
7
8
9
done!
Making sure that the stack size is indeed 10...good!
Making sure that push() now returns false...good!

********
Success!
********
```

## Distribution Code

```c
// for strdup() in the testing code
#define _XOPEN_SOURCE 500

#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// the capacity of the stack
#define CAPACITY 10

typedef struct
{
    // storage for the elements in the stack
    char* strings[CAPACITY];

    // the number of elements currently in the stack
    int size;
}
stack;

// declare a stack (as a global variable)
stack s;

// TODO: Put a new element into the stack onto the "top" of the data structure so that it will be retrived prior to the elements
// already in the stack, and return true. If the stack is already full, return false.
bool push(char* str)
{
	// TODO
}

/**
 * Implements some simple test code for our stack
 */
int main(void)
{
    // initialize the stack
    s.size = 0;

    printf("Pushing %i strings onto the stack...\n", CAPACITY);
    for (int i = 0; i < CAPACITY; i++)
    {
        char str[12];
        sprintf(str, "%i", i);
        push(strdup(str));
        printf("%s\n", str);
    }
    printf("done!\n");

    printf("Making sure that the stack size is indeed %i...", CAPACITY);
    assert(s.size == CAPACITY);
    printf("good!\n");

    printf("Making sure that push() now returns false...");
    assert(!push("too much!"));
    printf("good!\n");

    printf("\n********\nSuccess!\n********\n");

    return 0;
}

```