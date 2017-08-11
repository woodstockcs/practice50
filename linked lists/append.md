# Append

## Prerequisites
Pointers; Loops; Functions; Structures

## Problem
Write a function that appends a new node containing int i at the end of a singly linked list. Expected output:

```c
jharvard@run.cs50.net (~): ./a.out
Appending ints 0-9 onto the list...
done!
Your list contains 0 1 2 3 4 5 6 7 8 9
```

## Distribution Code
```c
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

typedef struct node
{
    // the value to store in this node
    int n;

    // the link to the next node in the list
    struct node* next;
}
node;

node* head = NULL;

void append(int i)
{
    // TODO
}

int main(void)
{
    // creating list
    printf("Appending ints 0-%i onto the list...\n", SIZE - 1);
    for (int i = 0; i < SIZE; i++)
    {
        append(i);
    }
    printf("done!\n");

    // printing out list
    printf("Your list contains ");
    for (node*  ptr = head; ptr != NULL; ptr = ptr->next)
    {
        printf("%i ", ptr->n);
    }
    printf("\n");

}
```