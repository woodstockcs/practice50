# Convert

## Possible Solution
```c
#include <cs50.h>
#include <stdio.h>

#define N 25

int fibo(int n);

int main(void)
{
    // print the entire series
    printf("The first 25 numbers in the Fibonacci series are: \n");
    for (int i = 0; i <= 24; i++)
    {
        printf("%i ", fibo(i));
    }
    printf("\n");
}

int fibo(int n)
{
    // base case
    if (n <= 1)
    {
        return n;
    }
    
    // recursive case
    return (fibo(n - 1) + fibo(n - 2));
}
```