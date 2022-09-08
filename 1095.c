#include<stdio.h>

int main(void)
{
    int n, ans;
    int arr[10000] = {0,};

    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
    }

    ans = arr[0];

    for (int i = 1; i < n; ++i)
    {
        if (ans > arr[i])
        {
            ans = arr[i];
        }
    }

    printf("%d", ans);
    return 0;
}