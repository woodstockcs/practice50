# binary to decimal

## Prerequisites
Loops; Conditions

## Problem
Write a program that takes a binary number as input and prints out that number in decimal notation. HINT: Try converting a few examples by hand, before fomulating the process more formally in C code.

```c
jharvard@run.cs50.net (~): ./a.out
Please enter a binary number: 101101
Decimal number of 101101 is 45

```

## Distribution Code
Write out the definition for the function <code>bin_to_dec(long bin)</code>

```c
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

// decimal to binary function declaration
long bin_to_dec(long long bin);

int main(void)
{
    printf("Enter a binary number\n");
    long long input = get_long_long();
    long decimal = bin_to_dec(input);
    printf("The decimal number of %lld is %ld\n", input, decimal);
}
 
// TODO: Write this function, to convert binary to decimal!
long bin_to_dec(long long bin)
{
	//TODO
}
```