# Playing with Data Types

## Possible Solution
```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // set int and float values, add up and store in both int and float
    int x = 12;
    float y = 7.34;
    int int_sum = x + y;
    float float_sum = x + y;
    //print
    printf("the two values are %d and %f", int_sum, float_sum);    
}
```