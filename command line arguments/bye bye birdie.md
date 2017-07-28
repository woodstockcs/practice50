# [Bye Bye Birdie](https://www.youtube.com/watch?v=1t3cBTb3xPc)

## Prerequisites
None

## Problem
Recall hello world? Time to say goodbye! Write a short program that takes in a name as a command line argument, and prints rgument<link> asd echo is a Unix command, that, according to its manual page, "display[s] a line of text." For example:

Implement your own version of the echo command. You’ll want to loop through the user’s arguments and print them out one-by-one, adding a space between them. You may want to try the echo command on your Appliance first, to get a taste of how it works. Tip: Remember to error check for correct number of command line arguments!
## Distribution Code

```c
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    // input verification
    if (argc < 2)
    {
        printf("Usage error\n");
        return 1;
    }
    
    // tally the number of characters, and print the final result
    int tally = 0;
    for (int i = 2; i < argc; i++)
    {
        tally += strlen(argv[i]);
    }
    printf("%d characters were given\n", tally);
    return 0;
}
```