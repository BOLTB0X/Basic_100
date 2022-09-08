#include<stdio.h>

int main(void)
{
    int n, y, x;
    int arr[20][20] = {0,};

    scanf("%d", &n);

    for (int i = 0; i < n; ++i)
    {
        scanf("%d %d", &y, &x);
        arr[y][x] = 1;
    }
    
    for (int i = 1; i <= 19; ++i)
    {
        for(int j = 1; j <= 19; ++j)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}