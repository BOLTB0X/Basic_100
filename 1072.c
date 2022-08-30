#include <stdio.h>

int main(void)
{
    int n, m;

    scanf("%d", &n);
    
    scanf("%d", &m);

    if (n-- != 0)
    {
        printf("%d\n", m);
    }

    return 0;
}