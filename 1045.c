#include <stdio.h>

int main(void)
{
    unsigned long long a, b;

    scanf("%lld %lld",&a, &b);
    printf("%lld\n", a + b);
    printf("%lld\n", a - b);
    printf("%lld\n", a * b);
    printf("%lld\n", a / b);
    printf("%lld\n", a % b);
    printf("%.2lf\n", (double)a / b);

    return 0;
}