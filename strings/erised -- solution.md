# Erised

## Possible Solution
```c
#include <cs50.h>
#include <stdio.h>
#include <string.h>

void reverse(string s);

int main(void)
{
    string erised = "erised straeh ruoy tub ecaf ruoy ton wohs i";
    printf("The hidden message inscribed on the mirror of erised is: \n");
    reverse(erised);
}

void reverse(string s)
{
	int length = strlen(s);
	for (int i = length; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
```