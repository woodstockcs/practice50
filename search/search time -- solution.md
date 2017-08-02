# Search Time

## Possible Solution

```c
#include <cs50.h>
#include <stdio.h>

// function declarations
void linear_time(int n);
void binary_time(int n);

int main(void)
{
    // get input from user
    printf("Insert the size of the array you would like to search for some value in: ");
    int size = get_int();
    
    // run functions to print out best and worst possible runtimes
    linear_time(size);
    binary_time(size);
}

// function definitions
void linear_time(int n)
{
    printf("The best possible runtime for linear search is 1 step, and the worst possible runtime is %i steps\n", n);
}

void binary_time(int n)
{
    int steps = 0;
    while (n > 0)
    {
        n /= 2;
        steps ++;
    }
    printf("The best possible runtime for binary search is 1 step, and the worst possible runtime is %i steps\n", steps);
}
```