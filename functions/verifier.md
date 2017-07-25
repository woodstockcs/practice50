# Verifier -- ASCII Edition

## Prerequisites
Functions; Data Types.

## Problem
The user is solving some basic addition problems, and wants to make sure he got the correct result. The below problem promps the user for the three ints: the two he is adding, followed by the result he got. Write a function <code>verify</code> of type <code>bool</code>, that takes in these three ints and returns either <code>true</code> or <code>false</code>, depending on whether or not he solved the problem correctly.

## Distribution Code
```c
#include <cs50.h>
#include <stdio.h>

// TODO: add verifier prototype

int main(void)
{
    // input from user
    printf("Enter the first int you are adding: ");
    int x = get_int();
    printf("Enter the second int you are adding: ");
    int y = get_int();
    printf("Enter the result: ");
    int z = get_int();
    
    // TODO: verify the result using the function you wrote, and print 'correct!' or 'incorrect!'
    
}

// TODO: write the verifier function

```