# Append

## Possible Solution
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
    node* ptr = malloc(sizeof(node));
    ptr = head;
    node* new = malloc(sizeof(node));
    // check to see if memory was indeed allocated
    if (new == NULL)
    {
        exit(1);
    }
    new->n = i;
    // if head is NULL, just make the new node the head and return. else, append to end by iterating through list
    if (head == NULL)
    {
        head = new;
        return;
    }
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = new;
    return;
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