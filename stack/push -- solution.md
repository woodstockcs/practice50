# Push

## Possible Solution

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

// implementation of push function
bool push(char* str)
{
    if (s.size < CAPACITY)
    {
        s.strings[s.size] = str;
        s.size++;
        return true;
    }
    else
    {
        return false;
    }
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