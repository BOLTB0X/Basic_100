#include <stdio.h>

int main(void)
{
    int a, tot = 0;

    scanf("%d", &a);
    if (a == 1)
    {
        printf("0");
    }

    else
    {
        for (int i = 2; i <= a; i += 2)
        {
            tot += i;
        }

        printf("%d", tot);
    }
    
    return 0;
}