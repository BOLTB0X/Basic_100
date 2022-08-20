#include <stdio.h>

void recursive_func(int number)
{
    if (number <= 0)
    {
        return;
    }

    recursive_func(number / 8);
    printf("%d", number % 8);

    return;
}

int main(void)
{
    int n;

    scanf("%d", &n);

    recursive_func(n);
    //printf("%o", n);
    return 0;
}