# For Loop Conversion

## Prerequisites
None

## Problem
Rewrite the following double for loop as a single for loop. Make sure it prints exactly the same output, even though you may not have variables i and j around.

```c
int main (void)
{
for (int i = 0; i < 5; i++)
    for (int j = 0; j < 5; j++)
        printf("i = %d, j = %d\n", i, j);
}
```