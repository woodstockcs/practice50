# Percentages

## Possible Solution
```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user for fraction, convert to %, print %
    printf("non-negative numerator:");
    float numerator = get_float();
    printf("positive denominator:");
    float denominator = get_float();
    float fraction = numerator/denominator;
    
    printf("Fraction as a percent: %.2f%%\n", fraction);
}
```