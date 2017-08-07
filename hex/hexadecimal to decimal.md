# Hexadecimal to Decimal

## Prerequisites
Loops; Conditions; ASCII

## Problem
Write a program that takes in a hexadecimal value as input and prints out the decimal value. Parts of it have been implemented for you below -- fill out the missing pieces!!
HINT: Try converting a few examples by hand, before fomulating the process more formally in C code.
HINT 2: It might be helpful to pull up an ascii table, for conversions to hexadecimal digits.
HINT 3: You can test your output by printing the hex value of a decimal number with the placeholder <code>%x</code>

```c
jharvard@run.cs50.net (~): ./a.out
Please enter a hexadecimal number, with digits between 0-F (only caps please): 2A4F56
The decimal value is 2772822
```

## Distribution Code
```c
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// single decimal (0-15) to hexa (0-f) function declaration
int hex_to_dec(char hex);

int main(void)
{
    // get input as string, store length for processing
    printf("Please enter a hexadecimal number, with digits between 0-F (only caps please): ");
    string hex = get_string();
        
    int final = 0;
    // TODO: iterate through hexa characters in string, converting and adding to a final decimal value

    printf("The decimal value is %i\n", final);
}

// dec to hex function implementation
int hex_to_dec(char hex)
{
    // TODO: return correct int value of a single hex character (between 0-15) by subtracting ascii offsets
    // (Can also be done using a switch statement)
    
}
```