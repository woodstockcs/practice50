# Accumulating Interest

## Prerequisites
None

## Problem
Implement a function with prototype
```c double accumulate_interest(double balance, double rate);```
that takes two doubles as input — a bank balance and an annual interest rate — and outputs an updated balance after 1 year of interest has accrued. Example output:

```c
jharvard@run.cs50.net (~): ./a.out
Starting balance: 100
Annual interest rate: 0.05
Updated balance: 105.00
```
## Distribution Code

```c
#include <cs50.h>
#include <stdio.h>

// TODO: function prototype

int main(void)
{
    printf("Starting balance: ");
    double start = GetDouble();
    printf("Annual interest rate: ");
    double interest = GetDouble();
    double updated = // TODO: call your function
    printf("Updated balance: %.2f\n", updated);
}

// TODO: function definition
```