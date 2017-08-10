# Sliding Pointers

## Prerequisites
Pointers; Loops

## Problem
The below code takes in a username, char-by-char, and prints it out. Example:
```c
jharvard@run.cs50.net (~): ./a.out
please enter a 6-letter username, char-by-char (hit enter after each character):
d
a
v
i
d
m
The username you entered is: davidm
```
Unfortunately, the coder forgot to free the memory he allocated! Free all heap memory used in the below program -- this might be a little tricky.
Hint: use the "valgrind -v" command to receive a more detailed analysis of memory allocated and freed by the program.

## Distribution Code
```c
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char* ptr = malloc(sizeof(char) * 7);
    printf("please enter a 6-letter username, char-by-char (hit enter after each character):\n");
    for (int i = 0; i < 6; i++)
    {
        *(ptr + i) = get_char();
    }

    ptr[6] = '\0';
    printf("The username you entered is: ");
    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }
    printf("\n");
    
    // TODO: free heap memory!

}
```