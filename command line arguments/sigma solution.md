# Sigma

## Possible Solution
```c
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    // sum up the argc command line arguments
    int sum = 0;
    for(int i = 1; i < argc; i++)
    {
        sum += atoi(argv[i]);
    }
    printf("The total sum is: %d\n", sum);
    
    return 0;
}
```