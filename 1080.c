#include <stdio.h>

int main(void)
{
    int n, tot = 0, number = 1;

    scanf("%d", &n);
    while (1)
    {
        tot += number;
        if (tot >= n)
        {
            break;
        }

        else
        {
            number++;
        }
    }
    
    printf("%d", number);
    return 0;
}