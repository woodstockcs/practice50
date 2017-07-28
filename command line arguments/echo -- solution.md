# echo!

## Possible Solution

```c
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc < 2)
    {
        printf("Usage error\n");
        return 1;
    }
    for (int i = 2; i < argc; i++)
    {
        printf("%s ", argv[i]);
    }
    printf("\n");
    return 0;
}
```