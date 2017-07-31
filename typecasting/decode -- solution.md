# Decode

## Possible solution
```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int code[] = {69, 110, 105, 103, 109, 97};
    // print out hidden code by casting ints as chars
    for (int i = 0; i < 6; i++)
    {
        printf("%c", (char) code[i]);
    }
    printf("\n");
}
```