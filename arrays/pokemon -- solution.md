# Pokemon

## Possible Solution

```c
#include <cs50.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

#define MAX 5

int main(void)
{
    // input from user
    string pokedex[MAX];
    for (int i = 0; i < MAX; i++)
    {
        printf("Give me a Pokemon: ");
        pokedex[i] = get_string();
    }
    
    // generate random index between 0 and 4, and use it to choose pokemon
    time_t t;
    srand((unsigned) time(&t));
    int r = rand() % 5;
    printf("%s, I choose you!\n", pokedex[r]);
}
```