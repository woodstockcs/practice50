# Tallying the Arguments

## Possible Solution

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
    
    // tally the number of characters
    int tally = 0;
    for (int i = 2; i < argc; i++)
    {
        tally += strlen(argv[i]);
    }
    printf("%d characters were given\n", tally);
    return 0;
}
```