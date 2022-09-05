#include <stdio.h>

int main(void)
{
    int a, d, n, ans;

    scanf("%d %d %d", &a, &d, &n);

    ans = a;
    for (int i = 1; i < n; ++i)
    {
        ans += d;
    }

    printf("%d", ans);
    return 0;
}