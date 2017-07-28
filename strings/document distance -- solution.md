# Document Distance

## Possible Solution

```c
#include <cs50.h>
#include <stdio.h>
#include <string.h>

void document_distance(string s1, string s2);

int main(void)
{
    string doc1 = "this is how James implimented the coad";
    string doc2 = "This is how Tania implemented The Code";

    document_distance(doc1, doc2);  
}

void document_distance(string s1, string s2)
{
	printf("The locations at which the two strings differ are: ");
	int difference_num = 0;
	for (int i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			printf("%d ", i);
			difference_num++;
		}
	}
	printf("\nThe number of differences between the two strings is: %d \n", difference_num);
}
```