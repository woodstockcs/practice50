# Simple Cipher

## Prerequisites
Data Types; Conditions

## Problem
The below code has a hidden message encrypted with a simple shift key: the encoding is 5 characters off the usual ascii standard (e.g. 'A' is being printed as 'F'). Edit one line of the code, in order to fix this and reveal the hidden message. You can ignore the rest of the code, which contains a string and an array -- concepts you may have not yet covered.

```c
jharvard@run.cs50.net (~): ./a.out
Please enter a lowercase character: l
The capitalized letter is: L
```

## Distribution Code
```c
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char message[] = "[tnqf&";
    
    printf("The hidden message is: ");
    for (int i = 0, n = strlen(message); i < n; i++)
    {
    	// TODO: shift the value of the character by 5 in the line below!
    	message[i] =
    	printf("%c", message[i]);
    }
    printf("\n");
}
```