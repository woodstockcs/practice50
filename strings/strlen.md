# String Length

## Prerequisites
Loops; Functions

## Problem
Imagine you do not have access to the function strlen. Write it anew for the below program, in which strlen is used to find the lengths of two strings (including the spaces). Pro-tip: in C, single quotes like these <code>' '</code> delimit a single character, while double quotes <code> " " </code> are used for strings.

## Distribution Code
```c
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int string_length(string s);

int main(void)
{
    string s1 = "The quick brown fox";
    string s2 = "jumps over the lazy dog";

    printf("The length of \"%s\" is %d\n", s1, string_length(s1));
    printf("The length of \"%s\" is %d\n", s2, string_length(s2));
  
}

int string_length(string s)
{
// TODO
}
```