# Decimal to Hexadecimal

## Prerequisites
Loops; Conditions; ASCII

## Problem
Write a program that takes a positive decimal value as input and prints out that number in binary notation. Parts of it have been implemented for you below -- fill out the missing parts!
HINT: Try converting a few examples by hand, before fomulating the process more formally in C code.
HINT 2: It might be helpful to pull up an ascii table, for conversions to hexadecimal digits
HINT 3: You can test your output by printing the hex value of a decimal number with the placeholder <code>%x</code>

```c
jharvard@run.cs50.net (~): ./a.out
Please enter a positive decimal value: 2489237
0x25FB95
```

## Distribution Code
```c
#include <cs50.h>
#include <stdio.h>

#define HEX_MAX 20

// single decimal (0-15) to hexa (0-f) function declaration
char dec_to_hex(int dec);

int main(void)
{
    // declare variable for input, array to store hex values
    int decimal;
    char hex[HEX_MAX];
    
    // get and set input
    printf("Please enter a positive decimal number: ");
    decimal = get_int();
    
    // TODO: repeatedly divide number by 16, and stor char of hex digit in hex array

 
    // TODO: print final hex number (print hex array either 'front-to back' or 'back-to-front', depending on how you stored values)
    printf("0x");
    
}

// dec to hex function implementation
char dec_to_hex(int dec)
{
    // TODO: return correct hex char of value between 0-15.
    // You can try this either by cleverly using ascii offsets, or by using a switch statement

}
```