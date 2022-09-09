#include <stdio.h>
    
int board[11][11] = {0, };

int main(void)
{   
    int y = 2, x = 2;
    // 입력
    for (int i = 1; i <= 10; ++i)
    {
        for (int j = 1; j <= 10; ++j)
        {
            scanf("%d",&board[i][j]);
        }
    }

    while (1)
    {
        if (board[y][x] == 0)
        {
            board[y][x++] = 9;
        }

        if (board[y][x] == 1)
        {
            x--;
            y++;
        }

        if (board[y][x] == 2)
        {
            board[y][x] = 9;
            break;
        }

        else if (board[y][x + 1] == 1 && board[y + 1][x] == 1)
        {
            if (board[y][x] == 0)
            {
                board[y][x] = 9;
            }
            break;
        }
    }

    // 입력
    for (int i = 1; i <= 10; ++i)
    {
        for (int j = 1; j <= 10; ++j)
        {
            printf("%d ",board[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}