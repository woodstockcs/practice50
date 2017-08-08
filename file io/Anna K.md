# Anna K.

## Prerequisites
None

## Problem
Implement a program that takes two command line arguments — a source file and a destination file — and copies the contents of the source to the destination. Specifically, we have provided the first page of Anna Karenina for you to copy. Hint: Follow the outlined pseudocode below!

```c
jharvard@run.cs50.net (~): ./a.out anna.txt copy.txt

```

## Distribution Code
```c
#include <stdio.h>
#include <cs50.h>

int main(int argc, char* argv[])
{
    // verify there is a correct number of arguments in the command line
    if (argc != 3)
    {
        printf("Usage: cp source dest\n");
        return 1;
    }

    // open up the source file (if the file doesn't exist, print an error message and return)
    

    // now open up the destination file (remember to check if NULL, and if so be sure to close the source file before exiting!)
    

    // read the contents of the source file one char (int!) at a time, and write to the destination file
    // remember to use int so that the c != EOF comparison is reliable

    
    // you leak memory if you forget to close the source and destination files!
    
}
```