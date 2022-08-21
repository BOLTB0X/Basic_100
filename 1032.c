#include <stdio.h>

char hex[16] = {'0','1','2','3','4','5','6','7','8','9',
                'a','b','c','d','e','f'};

void recursive_func(int number)
{
    if (number <= 0)
    {
        return;
    }

    recursive_func(number / 16);
    printf("%c", hex[number%16]);

    return;
}

int main(void)
{
    int n;

    scanf("%d",&n);

    recursive_func(n);
    //printf("%x",n);
    return 0;
}