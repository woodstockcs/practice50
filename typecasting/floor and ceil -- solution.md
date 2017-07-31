# Floor and Ceiling

## Possible Solution
```c
#include <cs50.h>
#include <stdio.h>

int find_floor(float x);
int find_ceil(float x);

int main(void)
{
    printf("Please enter a float value below:\n");
    float input = get_float();
    printf("The floor of %.2f is: %i\n", input, find_floor(input));
    printf("The ceiling of %.2f is: %i\n", input, find_ceil(input));
}

int find_floor(float x)
{
    return (int) x;
}

int find_ceil(float x)
{
    if (x - (int) x > 0.0)
        return (int) (x + 1.0);
    else
        return (int) x;
}
```