#include <stdio.h>

int main(void)
{
    int d = 5;
    int x = 0;
    int board[d][d];
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < d; j++)
        {
            board[i][j] = x;
            x = x + 1;
        }
    }

    printf("\n");
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < d; j++)
        {
            if (board[i][j] < 10) {
                printf(" %i", board[i][j]);
            } else {
                printf("%i", board[i][j]);
            }
            if (board[i][j] % 2 == 1)
            {
                printf("! ");
            } else {
                printf(": ");
            }
        }
        printf("\n\n");
    }
    printf("My favorite number is %i\n\n", board[d-2][d-2]);
}
