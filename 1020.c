#include <stdio.h>

int main(void)
{
    int f, b;

    scanf("%d-%d",&f, &b); // :으로 구분
    printf("%06d%07d", f, b);

    return 0;
}