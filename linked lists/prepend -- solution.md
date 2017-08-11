# Prepend

## Possible Solution
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
    node* new = malloc(sizeof(node));
    if (new == NULL)
    {
        exit(1);
    }
    new->n = i;
    new->next = head;
    head = new;
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