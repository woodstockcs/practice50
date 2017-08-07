# Hexadecimal to Decimal

## Possible Solution
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
    int len = strlen(hex);
    
    // iterate through characters in string, converting and adding to final int value
    int final = 0;
    for (int i = 0; i < len; i++)
    {
        final *= 16;
        final += hex_to_dec(hex[i]);
    }
    printf("The decimal value is %i\n", final);
}

// dec to hex function implementation
int hex_to_dec(char hex)
{
    // return correct int value of hex, between 0-15, by adding ascii offsets
    // (Could also have been done using a switch statement)
    if (48 <= hex && hex <= 57)
    {
        return hex - 48;
    }
    else
    {
        return hex - 55;
    }
}
```