# Encryption

## Possible Solution
```c
#include <cs50.h>
#include <stdio.h>

// function prototypes
bool test_7(int n);
bool test_19(int n);

int main(void)
{
    // query user for input
    printf("enter the first encryption factor: ");
    int fac_1 = get_int();
    printf("enter the second encryption factor: ");
    int fac_2 = get_int();
    // print result
    if (test_7(fac_1) && test_19(fac_2))
        printf("Success! Message was encrypted\n");
    else
        printf("Factors failed. Please try again later\n");
}

// function definitions
bool test_7(int n)
{
    if (n > 100 && n % 7 == 0)
        return true;
    else
        return false;
}

bool test_19(int n)
{
    if (n > 100 && n % 19 == 0)
        return true;
    else
        return false;
```