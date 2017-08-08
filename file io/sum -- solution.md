# Sum

## Possible Solution
```c
#include <stdio.h>
#include <cs50.h>

int to_int(int c);

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./sum summands.txt\n");
        return 1;
    }

    // open up the source file
    FILE* source = fopen(argv[1], "r");
    if (source == NULL)
    {
        printf("cp: %s: No such file\n", argv[1]);
        return 1;
    }

    // read the contents of the source file one char (int!) at a time, and use the to_int() function to increment
    // the overall sum by their value. Remember to use int so that the c != EOF comparison is reliable
    int sum = 0;
    for (int c = fgetc(source); c != EOF; c = fgetc(source))
    {
        sum += to_int(c);
    }
    
    // print the overall sum, and close the input file
    printf("total sum is: %i\n", sum);
    fclose(source);
}

int to_int(int c)
{
    if (c >= 48 && c <= 57)
    {
        return c - 48;
    }
    else
    {
        return 0;
    }
}
```