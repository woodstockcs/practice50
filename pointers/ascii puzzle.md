# ASCII Puzzle

## Prerequisites
None

## Problem
Pass the seven chars to printf() so that executing your code will print the word "POINTER". Hint: You only need each char once. Example output:
```c
jharvard@run.cs50.net (~): ./a.out
POINTER
```

## Distribution Code
```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
   int s = 65;
   int* t = &s;

   char C = 'I';
   char N = s + 'P' - 'A';
   char B = *t - s + N + 2;
   char E = &s - t + 78;
   char J = *t + 19;
   char I = N + 'A' - s - 1;
   char O = 347/5;

   // TODO: Print "POINTER" using the above chars
}
```