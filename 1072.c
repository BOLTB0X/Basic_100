#include <stdio.h>

int main(void)
{
    int n, m;

    scanf("%d", &n);
    
    reget:
    scanf("%d", &m);
    printf("%d\n", m);
    if (--n != 0)
    {
        goto reget;
    }

    return 0;
}