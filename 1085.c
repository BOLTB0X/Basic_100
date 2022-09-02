#include <stdio.h>

int main(void)
{
    double h, b, c, s;

    scanf("%lf %lf %lf %lf", &h, &b, &c, &s);

    double ans = (h * b * c * s) / 8 / 1024 / 1024;

    printf("%.1lf MB", ans);

    return 0;
}