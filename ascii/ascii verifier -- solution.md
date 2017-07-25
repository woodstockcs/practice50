# Verifier -- ASCII Edition

## Possible Solution
```c
#include <cs50.h>
#include <stdio.h>

// function prototypes
int char_to_int(char c);
bool verifier(int a, int b, int c);

int main(void)
{
    // input from user
    printf("Enter the first int you are adding (between 0-9): ");
    char x_1 = get_char();
    printf("Enter the second int you are adding (between 0-9): ");
    char y_1 = get_char();
    printf("Enter the result: ");
    char z_1 = get_char();

    
    // turn input into ints
    int x_2 = char_to_int(x_1);
    int y_2 = char_to_int(y_1);
    int z_2 = char_to_int(z_1);

    if(verifier(x_2,y_2,z_2))
    	printf("Verification complete! The problem is correct.\n");
    else
        printf("Verification complete! The problem is incorrect\n.");
    
}

// function definitions
int char_to_int(char c)
{
    int num = c - '0';
    return num;
}

bool verifier(int a, int b, int c)
{
	if (a + b == c)
    	return true;
	return false;
}

```