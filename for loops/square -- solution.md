# Square

## Possible Solution
```c
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
    printf("Give me a number between 1 and 23: ");
    int side = get_int();
    for(int i = 0; i < side; i++)
    {
        for(int j = 0; j < side; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}

```