# Decimal to Binary

## Prerequisites
Loops; Conditions

## Problem
Write a program that takes a positive decimal value as input and prints out that number in binary notation. HINT: Try converting a few examples by hand, before fomulating the process more formally in C code.

```c
jharvard@run.cs50.net (~): ./a.out
Please enter a positive decimal value: 45
The binary number of 45 is 101101
```

## Distribution Code
Write out the definition for the function <code>dec_to_bin(int dec)</code>

```c
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// decimal to binary function declaration
long dec_to_bin(int dec);

int main(void)
{
    printf("Enter a decimal number\n");
    int input = get_int();
    long binary = dec_to_bin(input);
    printf("Binary number of %d is %ld\n", input, binary);
}
 
// decimal to binary function definition
long dec_to_bin(int dec)
{
    // TODO: Write this function    
}
```