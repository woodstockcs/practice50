# Vending Machine

## Possible Solution
```c
#include <cs50.h>
#include <stdio.h>
int main(void)
{
    // query user for input
    printf("Enter the code for a chocolate bar (between 1 and 8):");
    int n = get_int();
    
    // switch statement for giving user chocolate bar
    switch(n)
    {
        case 1:
            printf("You got a Mars bar!\n");
            break;
        case 2:
            printf("You got a Snickers bar!\n");
            break;
        case 3:
            printf("You got a Milky Way!\n");
            break;
        case 4:
            printf("You got a Kit Kat!\n");
            break;
        case 5:
            printf("You got a Twix!\n");
            break;
        case 6:
            printf("You got a Crunch!\n");
            break;
        case 7:
            printf("You got a Hershey's!\n");
            break;
        case 8:
            printf("You got a 3 Musketeers!\n");
            break;
        default:
            printf("Please enter a valid selection.\n");
    }
}
```