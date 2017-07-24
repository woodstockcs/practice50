# Temperature Conversion

## Possible Solution

```c
#include <cs50.h>
#include <stdio.h>

int main()
{
    // query user for input, change to celsius
    printf("Please enter temperature in fahrenheit:\n");
    float fahrenheit = get_float();
    float celsius = (fahrenheit - 32) * 5/9;

    // print final result
    printf("Temperature in F: %.2f\n", fahrenheit);
    printf("Temperature in C: %.2f\n", celsius);
}
```
