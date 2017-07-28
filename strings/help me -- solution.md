# Help me!

## Possible Solution
```c
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string message = "H7lpZm7,ZOb4-WanZK7n8b4.ZY8u'r7Zm3Z8nl3Zh8p7!";
    // print according to encoding
    for (int i = 0; i < strlen(message); i++)
    {
        switch(message[i])
        {
            case '7':
                printf("e");
                break;
            case 'Z':
                printf(" ");
                break;
            case '3':
                printf("y");
                break;
            case '8':
                printf("o");
                break;
            case '4':
                printf("i");
                break;
            default:
                printf("%c",message[i]);
                break;
        }
    }
    printf("\n");
}
```