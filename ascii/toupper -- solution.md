# toupper

## Possible Solution
```c
#include <cs50.h>
#include <stdio.h>

// function declaration
int toupper(char c);

int main(void)
{
    char c;
    // input from user
    do
    {
        printf("Please enter a lowercase alphabetical character: ");
        c = get_char();
    }
    while(c < 'a' || c > 'z');  
    
    // capitalize and print
    c = toupper(c);
    printf("The capitalized letter is: %c\n", c);
}

// function definition
int toupper(char c)
{
    c = c - 'a' + 'A';
    return c;
}


```