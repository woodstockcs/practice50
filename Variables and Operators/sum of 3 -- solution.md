# Sum of 3

## Possible Solution

```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // declare variable, query user for input
    printf("please enter variables, one after the other, and hit return after each:\n");
    int x = get_int();
    x += get_int();
    x += get_int();
    
    // print final sum
    printf("The final sum is: %d\n",x);
}

```