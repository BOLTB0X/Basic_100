#include<stdio.h>
#include<string.h>

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
    char str[1001000];
    int dec = 0, len;

    //scanf("%x",&n);
    //printf("%o",n);

    scanf("%s", str);
    
    len = strlen(str);
    for (int i = len - 1, j = 1; i>=0; --i, j *= 16)
    {
        if (str[i] >= 'a')
        {
            dec += (str[i] - 'a' + 10) * j;
        }
        else
        {
            dec += (str[i] - '0') * j;
        }
    }

    recursive_func(dec);
    return 0;
}