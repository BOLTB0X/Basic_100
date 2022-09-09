#include <stdio.h>

int main(void)
{
    int n, y, x;
    int board[20][20];

    for (int i = 1; i <= 19; ++i)
    {
        for (int j = 1; j <= 19; ++j)
        {
            scanf("%d", &board[i][j]);
        }
    }

    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d %d", &y, &x);
        for (int j = 1; j <= 19; ++j)
        {
            if (board[y][j] == 0)
            {
                board[y][j] = 1;
            }

            else
            {
                board[y][j] = 0;
            }
        }

        for (int j = 1; j <= 19; ++j)
        {
            if (board[j][x] == 0)
            {
                board[j][x] = 1;
            }

            else
            {
                board[j][x] = 0;
            }
        }        
    }

    // 출력
    for (int i = 1; i <= 19; ++i)
    {
        for (int j = 1; j <= 19; ++j)
        {
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }

    return 0;
}