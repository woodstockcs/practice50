# binary to decimal

## Possible Solution
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
 
// decimal to binary function definition
long bin_to_dec(long long bin)
{
    int r; 
    long decimal = 0;
    long i = 0;
    
    while(bin != 0)
    {
        r = bin % 10;
        bin = bin / 10;
        decimal = decimal + (r * pow (2, i));
        i++;
    }
    return decimal;
}
```