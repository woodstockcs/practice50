# Prepend

## Prerequisites
Pointers; Loops; Functions; Structures

## Problem
Write a function that <strong>prepends</strong> a new node containing <code>int i</code> to the front of a singly linked list. Expected output:
```c
jharvard@run.cs50.net (~): ./a.out
Prepending ints 0-9 onto the list...
Your list contains 9 8 7 6 5 4 3 2 1 0
```

## Distribution Code
```c
#include <stdbool.h>
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

void prepend(int i)
{
    //TODO
}

int main(void)
{
    // creating list
    printf("Prepending ints 0-%i onto the list... ", SIZE - 1);
    for (int i = 0; i < SIZE; i++)
    {
        prepend(i);
    }
    printf("done!\n");

    // printing out list
    printf("Your list contains ");
    for (node* ptr = head; ptr != NULL; ptr = ptr->next)
    {
        printf("%i ", ptr->n);
    }
    printf("\n");
}
```