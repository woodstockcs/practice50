# Verifier -- ASCII Edition

## Prerequisites
Functions; Data Types.

## Problem
Recall the verifier from the 'function' practice problems, which takes in three ints and verifies that the third is the sum of the first two. A student who attempted to solve the problem accidentally read them in as chars, rather than ints. To fix this verifier, write a function that takes in a char between 0-9, and returns the equivalent int! You'll also have to make some modifications to the <code>main</code> function.

## Distribution Code
```c
#include <cs50.h>
#include <stdio.h>

// function prototypes TODO: add char_to_int function
bool verifier(int a, int b, int c);

int main(void)
{
    // input from user
    printf("Enter the first int you are adding (between 0-9): ");
    char x_1 = get_char();
    printf("Enter the second int you are adding (between 0-9): ");
    char y_1 = get_char();
    printf("Enter the result: ");
    char z_1 = get_char();
    
    // TODO: turn input into ints (using char_to_int), and use them to verify the result, printing 'correct!' or 'incorrect!'
    
}

// function definitions
bool verifier(int a, int b, int c)
{
	if (a + b == c)
    	return true;
	return false;
}
// TODO: Add char_to_int function definition
```