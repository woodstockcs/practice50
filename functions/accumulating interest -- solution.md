# Accumulating Interest

## Possible Solution
```c
#include <cs50.h>
#include <stdio.h>

// function prototype
double accumulate_interest(double balance, double rate);

int main(void)
{
    printf("Starting balance: ");
    double start = get_double();
    printf("Annual interest rate: ");
    double interest = get_double();
    double updated = accumulate_interest(start, interest);
    printf("Updated balance: %.2f\n", updated);
}

// Function definition
double accumulate_interest(double balance, double rate)
{
    double updated_balance = balance + rate * balance;
    return updated_balance;
}
```