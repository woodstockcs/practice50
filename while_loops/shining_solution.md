# The Shining

## Possible Solution

```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s = "All work and no play makes Jack a dull boy.";
    int i = 0;

    while(i < 120)
    {
        printf("%s\n", s);
        i += 12;
    }

    return 0;
}
```
