#include <stdio.h>

int main(void)
{
    long long a, r, n, ans;

    scanf("%lld %lld %lld", &a, &r, &n);

    ans = a;
    for (long long i = 1; i < n; ++i)
    {
        ans *= r;
    }

    printf("%lld", ans);
    return 0;
}