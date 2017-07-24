# Verify Room input

## Possible Solution
```c
#include <cs50.h>
#include <stdio.h>

int main ()
{
    char letter;
    int n;    
    do
    {
        printf("Please enter a capital between A and G: ");
        l = get_char();
        printf("Please enter a positive integer between 1 and 20: ");
        n = get_int();
    }
    while (n < 1 || n > 20 || l < 65 || l > 71);
}
```