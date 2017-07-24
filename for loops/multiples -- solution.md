# Multiples

## Possible Solution
```c
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
    // query user for input
    printf("Please enter number between 1 and 100: ");
    int input = get_int();
    for(int i = 1; i <= 100; i++)
    {
        if (i % input == 0)
            printf("%d  ", i);
    }
    printf("\n");
}

```