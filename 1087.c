#include <stdio.h>

int main(void)
{
    long long n, tot = 0;

    scanf("%lld", &n);

    for (long long i = 1; i <=n; ++i)
    {
        if(tot >= n)
        {
            break;
        }

        else
        {
            tot += i;
        }
    }

    printf("%d", tot);
    return 0;
}