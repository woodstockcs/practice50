# Initializations

## Possible Solution

```c
#include <cs50.h>
#include <stdio.h>

#define DIM_1 10
#define DIM_2 30

int main(void)
{
    // First array initialized with 1 line of code
    int array[DIM_1] = {0};
    
    // Set each of the indexes of the below 2D array to the value i * j
    int array_2[DIM_2][DIM_2];
    for (int i = 0; i < DIM_2; i++)
        for (int j = 0; j < DIM_2; j++)
        {
            array_2[i][j] = i * j;
        }
    
    // Test by printing both arrays
    for (int i = 0; i < DIM_1; i++)
        printf("%d ", array[i]);
    printf("\n\n");
    for (int i = 0; i < DIM_2; i++)
        {
        for (int j = 0; j < DIM_2; j++)
            printf("%d ", array_2[i][j]);
        printf("\n");
        }
}
```