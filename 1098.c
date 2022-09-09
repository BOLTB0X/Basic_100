#include <stdio.h>

int main(void)
{
    int n, h, w, l, d, y, x;
    int board[101][101] = {0, };

    scanf("%d %d", &h, &w);
    scanf("%d", &n);

    for (int i = 0; i < n; ++i)
    {
        scanf("%d %d %d %d", &l, &d, &y, &x);

        // 가로
        if (d == 0)
        {
            for (int i = x; i < x + l; ++i)
            {
                board[y][i] = 1;
            }
        }

        // 세로
        else
        {
            for (int i = y; i < y + l; ++i)
            {
                board[i][x] = 1;
            }
        }
    }

    // 출력
    for (int i = 1; i <= h; ++i)
    {
        for (int j = 1; j <= w; ++j)
        {
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }

    return 0;
}