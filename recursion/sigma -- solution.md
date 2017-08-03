# Sigma

## Possible Solution
```c
#include <cs50.h>
#include <stdio.h>

int sigma(int n);

int main (void)
{
    // take in array size and elements from user
    printf("please enter an integer value: ");
    int n = get_int();
    
    // print the result
    printf("The result of sigma(%i) is %i\n", n, sigma(n));
}

// naive implementation of bubble sort
int sigma(int n)
{
    // base case
    if (n < 2)
    {
        return n;
    }
    
    // recursive case
    return (n + sigma(n - 1));
}
```