# Insert Sorted

## Prerequisites
Pointers; Loops; Functions; Structures

## Problem
Write a function that inserts a new node containing <code>int i</code> into the appropriate position in a list <strong>sorted in ascending order</strong>.
```c
jharvard@run.cs50.net (~): ./a.out
Inserting 10 random ints to the list...
done!
Your list now contains 0 0 1 1 2 2 3 8 9 9
```

## Distribution Code
```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

void insert_sorted(int i)
{
    // TODO
}

int main(void)
{
    // seed rand(), insert random ints into list
    srand((int)time(NULL));
    printf("Inserting %i random ints to the list...\n", SIZE);
    for (int i = 0; i < SIZE; i++)
    {
        insert_sorted(rand() % SIZE);
    }
    printf("done!\n");

    // printing out list
    printf("Your list now contains ");
    for (node*  ptr = head; ptr != NULL; ptr = ptr->next)
    {
        printf("%i ", ptr->n);
    }
    printf("\n");
}
```