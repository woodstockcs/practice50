# Hide Anna K.

## Possible Solution
```c
#include <stdio.h>
#include <cs50.h>

int encrypt(int c);
int decrypt(int c);

int main(int argc, char* argv[])
{
    if (argc != 3)
    {
        printf("Usage: cp source dest\n");
        return 1;
    }

    // open up the source file
    FILE* source = fopen(argv[1], "r");
    if (source == NULL)
    {
        printf("cp: %s: No such file\n", argv[1]);
        return 1;
    }

    // now open up the destination file
    FILE* dest = fopen(argv[2], "w");
    if (dest == NULL)
    {
        // make sure to close the source file before exiting!
        fclose(source);
        printf("cp: %s: Cannot open file for writing\n", argv[2]);
        return 1;
    }

    // read the contents of the source file one char (int!) at a time
    // remember to use int so that the c != EOF comparison is reliable
    for (int c = fgetc(source); c != EOF; c = fgetc(source))
    {
        // write the character to the destination file!
        // could also use fprintf(dest, "%c", c)
        putc(encrypt(c), dest);
    }

    // you leak memory if you forget to close!
    fclose(source);
    fclose(dest);
}

int encrypt(int c)
{
    return c + 10;
}

int decrypt(int c)
{
    return c - 10;
}
```