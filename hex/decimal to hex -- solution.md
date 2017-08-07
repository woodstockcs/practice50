# Decimal to Hexadecimal

## Possible Solution
```c
#include <cs50.h>
#include <stdio.h>

#define HEX_MAX 20

// single decimal (0-15) to hexa (0-f) function declaration
char dec_to_hex(int dec);

int main(void)
{
    // declare variables for input, array to store hex
    int decimal, quotient, rem;
    char hex[HEX_MAX];
    
    // get and set input
    printf("Please enter a positive decimal number: ");
    decimal = get_int();
    quotient = decimal;
    
    int j = 0;
    // repeatedly divide number by 16, and stor char of hex digit in array
    while (quotient != 0)
    {
        rem = quotient % 16;
        hex[j] = dec_to_hex(rem);
        quotient /= 16;
        j++;
    }
 
    // print final hex number
    printf("0x");
    for (int i = j; i >= 0; i--)
    {
        printf("%c", hex[i]);
    }
    printf("\n");
}

// dec to hex function implementation
char dec_to_hex(int dec)
{
    // return correct hex char of value between 0-15, by adding ascii offsets
    // (Could also have been done using a switch statement)
    if (dec < 10)
    {
        return 48 + dec;
    }
    else
    {
        return 55 + dec;
    }
}
```