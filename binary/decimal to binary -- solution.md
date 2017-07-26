# Decimal to Binary

## Possible Solution
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
    // declare variables for remainder, the final binary number, and a counter
    int r; 
    long binary = 0;
    long i = 1;
    
    while(dec != 0)
    {
        r = dec % 2;
        dec = dec / 2;
        binary = binary + (r * i);
        i = 10 * i;
    }
    return binary;
}
```