# glocal

## Possible Solution
```c
#include <cs50.h>
#include <stdio.h>

// function prototype to fix
int add_5(int x);

int main(void)
{
    // input from user
    printf("Enter some integer value: ");
    int x = get_int();
    printf("the value of x before adding 5 is %d\n", x);
    // update x, and print again
    x = add_5(x);
    printf("the value of x after adding 5 is %d\n", x);
}

// function definition to fix
int add_5(int x)
{
    x = x + 5;
    return x;
}
```