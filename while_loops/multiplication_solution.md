# Multiplication

## Possible Solution

```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // prompt user for two integers
    printf("Please enter two integer values, and hit return after each:\n");
    int x = get_int();
    int y = get_int();

    // iterator and final product variables
    int final = 0;
    int i = 0;

    // loop x times, each time adding y to the final result
    while(i < x)
    {
        final += y;
        i++;
    }

    // all done!
    printf("%d * %d = %d\n", x, y, final);
    return 0;
}
```
