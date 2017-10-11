# Referencing

## Prerequisites
None

## Problem
In the below code, change only one line (marked), such that the <code>"final value"</code> printed is 6.0. Example output:
```c
jharvard@run.cs50.net (~): ./a.out
x is 4.00, y is 3.00.
The final value is: 6.00
```

## Distribution Code
```c
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float x = 4.0;
    printf("x is %.2f, ", x);
    float y = 3.0;
    printf("y is %.2f.\n", y);
    float* xp = &x; // TODO: edit this line, and only the right hand side of the equation
    float* yp = &y;
    printf("The final value is: %.2f\n", *xp + *yp);
}
```
