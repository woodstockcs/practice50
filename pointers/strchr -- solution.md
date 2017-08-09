# strchr

## Possible Solution
```c
#include <stdio.h>
#include <cs50.h>
#include <string.h>

char* my_strchr(char* str, char c)
{
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (*(str + i) == c)
        {
            return (str + i);
        }
    }
    return NULL;

}

int main(void)
{
    printf("String: ");
    char* str = get_string();
    printf("Character: ");
    char c = get_char();
    printf("Looking for substring...\n");
    char* result = my_strchr(str, c); 
    if (result == NULL)
    {
        printf("Couldn't find %c.\n", c);
    }
    else
    {
        printf("Substring: %s \n", result);
    }
}
```