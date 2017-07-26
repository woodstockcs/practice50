# toupper

## Prerequisites
Data Types; Conditions

## Problem
Implement the function <code>toupper</code> yourself! The function should take in a lowercase character, and capitalize it. Example output:

```c
jharvard@run.cs50.net (~): ./a.out
Please enter a lowercase character: l
The capitalized letter is: L
```

## Distribution Code
```c
#include <cs50.h>
#include <stdio.h>

// TODO: write the function declaration

int main(void)
{
    char c;
    // input from user
    do
    {
        printf("Please enter a lowercase alphabetical character: ");
        c = get_char();
    }
    // TODO: write a condition to verify the input is indeed a lowercase character
    while();  
    
    // capitalize and print
    c = toupper(c);
    printf("The capitalized letter is: %c\n", c);
}

// TODO: write the function definition

```