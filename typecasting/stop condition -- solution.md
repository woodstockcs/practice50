# Stop that Loop!

## Possible Solution
```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // take in input from user
    printf("Change: ");
    float change = get_float();
    // float arithmetic is inherently inaccurate, so convert to ints in order to print correct change
    int int_change = (int) (change * 100);
    // loop and print change
    while (int_change != 0)
    {
    	printf("Here's a penny...\n");
    	int_change -= 1;
	}
}
```