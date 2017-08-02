# Needle in a Haystack

## Possible Solution

```c
#include <cs50.h>
#include <stdio.h>

#define SIZE 8

bool search(int needle, int haystack[], int size)
{
	// iterative implementation
	int start = 0;
	int end = size - 1;	
	int mid;
	while (start <= end)
	{
		mid = (start + end) / 2;
		if (haystack[mid] == needle)
		{
			return true;
		}
		else if (haystack[mid] < needle)
		{
			start = mid + 1;
		}
		else
		{
			end = mid - 1;
		}
	}
	return false;
}

int main(void)
{
    int numbers[SIZE] = { 4, 8, 15, 16, 23, 42, 50, 108 };
    printf("> ");
    int n = get_int();
    if (search(n, numbers, SIZE))
    {
        printf("YES\n");
    }
    else 
    {
        printf("NO\n");
    }
}
```