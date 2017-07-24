# Setting a Radio Clock #2

Take in input from the user for date and time, and print them to the screen. Use a float for time, with digits to the right of the decimal point representing minutes. You might have to look up placeholders for printing different data types.


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
    printf("please enter the time, with digits to the right of the decimal point representing minutes:\n");
    float time_of_day = get_float();
    
    // print formatted date
    printf("The date and time are: %d/%d/%d, %.2f\n", month, day, year, time_of_day);
}
```