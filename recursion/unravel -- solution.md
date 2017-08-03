# Unravel

## Possible Solution
```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Please enter a positive integer value: \n");
    int n = get_int();
    if (n % 3 == 0)
    {
        printf("True!\n");
    }
    else
    {
        printf("False!\n");
    }
}
```