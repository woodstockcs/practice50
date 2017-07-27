# Mean

## Possible Solution

```c
#include <cs50.h>
#include <stdio.h>

#define N 5

int main(void)
{
    // declare array, and prompt user for input
    int input[N];
    for (int i = 0; i < N; i++)
    {
    	printf("Give me an integer: ");
    	input[i] = get_int();
    }
    
    // calculate and print average
    float average = 0;
    for (int i = 0; i < N; i++)
    {
    	average += input[i];
    }
    average /= N;
    printf("Average: %.2f", average);
}
```