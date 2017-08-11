# Insert Sorted

## Possible Solution
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
    node* ptr = head;
    node* new = malloc(sizeof(node));
    // check to see if memory was indeed allocated
    if (new == NULL)
    {
        exit(1);
    }
    new->n = i;
    // if head is NULL, just make the new node the head and return
    if (head == NULL)
    {
        head = new;
        return;
    }
    // if smaller than head of list, prepend
    else if (ptr->n > i)
    {
        head = new;
        new->next = ptr;
    }
    // in all other cases
    else
    {
        while (ptr->next != NULL)
        {
            if (ptr->next->n >= i)
            {
                break;
            }
            ptr = ptr->next;
        }
        new->next = ptr->next;
        ptr->next = new;
        return;
    }
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