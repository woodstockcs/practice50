# Secret Message

## Possible Solution

```c
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // hidden message to decode
    string s = "asTJhhJKikJswe hkij;sop /bCurSN;5PK0es";

    // variables to hold an iterator and the string's length
    int i = 0, len = strlen(s);

    // loop over the characters
    while(i < len)
    {
        // use modulo to determine each third character
        if (i % 3 == 2)
        {
            // print out the given character
            printf("%c", s[i]);  
        }

        // increment iterator variable
        i++;
    }

    // all done!
    printf("\n");
    return 0;
}
```
