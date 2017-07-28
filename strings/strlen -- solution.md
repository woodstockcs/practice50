# String Length

## Possible Solution
```c
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int string_length(string s);

int main(void)
{
    string s1 = "The quick brown fox";
    string s2 = "jumps over the lazy dog";

    printf("The length of \"%s\" is %d\n", s1, string_length(s1));
    printf("The length of \"%s\" is %d\n", s2, string_length(s2));
  
}

int string_length(string s)
{
	int length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	return length;
}
```