#include <stdio.h>

int main(void)
{
    int n;

    scanf("%x", &n);

    for (int i = 1; i <= 15; ++i)
    {
        printf("%X*%X=%X\n", n, i, i * n);
    }

    return 0;
}