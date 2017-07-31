# Floor and Ceiling

## Prerequisites
Types

## Problem
Recall that the "floor" of some real number, x, usually written [x], is the largest integer less than or equal to x. For instance, [50.0] = 50, [50.1] = 50, [50.5] = 50, [50.9] = 50, and [50.999] = 50. Complete the implementation of <code>find_floor</code> below. You may assume that x will be non-negative. You may not use any functions declared in <code>math.h</code>.

Recall that the "ceiling" of some real number, x, usually written [x], is the smallest integer greater than or equal to x. For instance, [49.001] = 50, [49.1] = 50, [49.5] = 50, [49.9] = 50, and [50.0] = 50. Also complete the implementation of <code>find_ceil</code> below. You may assume that x will be non-negative. Again, you may not use any functions declared in <code>math.h</code>, but you may call your own version of floor. Hint: Be sure to test your functions with various values (e.g. make sure the ceiling of 5.0 is 5, and not 6).

From: CS50 Quiz Bank

## Distribution Code
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
    // TODO
}

int find_ceil(float x)
{
    // TODO
}
```