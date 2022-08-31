#include <stdio.h>

int main(void)
{
    int a, start = 0;

    scanf("%d", &a);
    while (start <= a)
    {
        printf("%d\n", start);
        start++;
    }
    
    return 0;
}