#include <stdio.h>

int main(void)
{
    char a, start = 'a';

    scanf("%c", &a);
    while (start <= a)
    {
        printf("%c ", start);
        start++;
    }
    
    return 0;
}