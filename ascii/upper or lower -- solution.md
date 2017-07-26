# Uppercase or Lowercase?

## Possible Solution
```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // input from user --
    printf("Please enter an alphabetical character: ");
    char c = get_char();
    if (c >= 'A' && c <= 'Z')
        printf("You printed an uppercase letter!\n");
    else if (c >= 'a' && c <= 'z')
        printf("You printed a lowercase letter!\n");
    else
        printf("Please try again.\n");    
}

```