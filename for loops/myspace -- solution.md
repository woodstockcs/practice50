# Myspace

## Possible Solution
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

```c
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
    // query user for input
    printf("Please enter a message, all in lowercase letters (no numbers): ");
    string input = get_string();
    for(int i = 0; i < strlen(input); i++)
    {
        if (input[i] == 32)
            printf(" ");
        else if (i % 2 == 0)
            printf("%c", input[i] - 32);
        else
            printf("%c", input[i]);
    }
    printf("\n");    
}

```