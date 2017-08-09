# strchr

## Prerequisites
Loops; Conditions; Functions

## Problem
Implement strchr(), a standard function that returns a substring of a C string that starts with a given character. If the character is not in the string, it should return NULL. Example output:
```c
jharvard@run.cs50.net (~): ./a.out
String: happy cat
Character: a
Looking for substring...
Substring: appy cat
```

Hint: recall that <code>a[i]</code> is treated by the compiler exactly like this <code>*(a + i)</code>

## Distribution Code
```c
#include <stdio.h>
#include <cs50.h>
#include <string.h>

char* my_strchr(char* str, char c)
{
   // TODO
}

int main(void)
{
    printf("String: ");
    char* str = get_string();
    printf("Character: ");
    char c = get_char();
    printf("Looking for substring...\n");
    char* result = my_strchr(str, c); 
    if (result == NULL)
    {
        printf("Couldn't find %c.\n", c);
    }
    else
    {
        printf("Substring: %s \n", result);
    }
}
```