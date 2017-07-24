# Radio Clock

## Possible Solution

```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // query user for input
    printf("please enter month, day and year, and hit return after each:\n");
    int month = get_int();
    int day = get_int();
    int year = get_int();
    
    // print formatted date
    printf("The date is: %d/%d/%d\n", month, day, year);
}
```
