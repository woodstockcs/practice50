# For Loop Conversion

## Possible Solution
```c
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
    for (int i = 0; i <= 15; i++)
        printf("i = %d, j = %d\n", i / 5, i % 5);
}
```