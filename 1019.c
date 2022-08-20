#include <stdio.h>

int main(void)
{
    int y, m, d;

    scanf("%d.%d.%d",&y, &m, &d); // :으로 구분
    printf("%04d.%02d.%02d", y, m, d);

    return 0;
}