# Swap

## Possible Solution
```c
#include <cs50.h>
#include <stdio.h>

void swap(int* a, int* b);

int main(void)
{
    // get input from user
    printf("please enter value of x: ");
    int x = get_int();
    printf("please enter value of y: ");
    int y = get_int();
    
    // swap and print
    printf("x is %i\n", x);
    printf("y is %i\n", y);
    printf("Swapping...\n");
    swap(&x, &y);
    printf("Swapped!\n");
    printf("x is %i\n", x);
    printf("y is %i\n", y);
    
}

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
```