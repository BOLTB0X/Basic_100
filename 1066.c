#include<stdio.h>

int main(void)
{
    int arr[3];

    for (int i = 0; i < 3; ++i)
    {
        scanf("%d", &arr[i]);
    }

    for (int i =0; i < 3; ++i)
    {
        if (arr[i] % 2)
        {
            printf("odd\n");
        }

        else{
            printf("even\n");
        }
    }
    
    return 0;
}