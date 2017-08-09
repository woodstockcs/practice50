# Referencing

## Possible Solution
```c
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float x = 4.0;
    printf("x is %.2f, ", x);
    float y = 3.0;
    printf("y is %.2f.\n", y);
    float* xp = &y; // TODO: edit this line, and only the right hand side of the equation
    float* yp = &y;
    printf("The final value is: %.2f\n", *xp + *yp);
}
```