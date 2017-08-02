# Fix the Converter

## Possible Solution
```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
	printf("Temperature in C: ");
	float c = get_float();
	float f = ((float) 9 /(float) 5) * c + 32;
	printf("%.1f C = %.1f F\n", c, f);
}
```