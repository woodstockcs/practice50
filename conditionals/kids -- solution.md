# Kids

## Possible Solution
```c
#include <cs50.h>
#include <stdio.h>

int main (void)
{
    printf("Average number of children per family in US: ");
    int n = get_int();
    if (n == 2)
        printf("That is correct!\n");
    else
        printf("That is incorrect!\n");
}
```