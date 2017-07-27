# Garbage Values

## Possible Solution
```c
#include <cs50.h>
#include <stdio.h>

#define N 20
int main(void)
{
    // declare the array, initialize all values to 0, and then store some values we'd like to find the sum of
    int values[N] = {0}; // This is the only line we had to change -- to initialize values!
    values[0] = 1;
    values[1] = 10;
    values[2] = 5;
    values[3] = 12;
    values[4] = 3;
    // calculate the sum
    int sum = 0;
    for (int i = 0; i < N; i++) // You are not allowed to change this line of the code!
    {
        sum += values[i];
    }
    
    printf("The sum of 1 + 10 + 5 + 12 + 3 is: %d\n", sum);
}
```