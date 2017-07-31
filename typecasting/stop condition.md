# Stop that Loop!

## Prerequisites
None

## Problem
The below program, which is supposed to print out the change you receive in pennies, has a tendency to become stuck in an infinite loop. Why might this be? (Hint: think about the type being used). Fix the code so as to print out the correct change, without becoming stuck.

## Distribution Code

```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // take in input from user
    printf("Change: ");
    float change = get_float();
    // loop and print change
    while (change != 0.00)
    {
    	printf("Here's a penny...\n");
    	change -= 0.01;
	}
}

```