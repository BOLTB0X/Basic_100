#include <stdio.h>

int main(void)
{
    int w, h, n;

    scanf("%d %d %d", &w, &h, &n);

    printf("%.2lf MB",(double)((w * h *n) / 8) / 1024/ 1024);
    return 0;
}