#include<stdio.h>

int main(void)
{
    char alp;
    
    scanf("%c", &alp);

    switch (alp)
    {
    case 'A':
        printf("best!!!");
        break;
    
    case 'B':
        printf("good!!");
        break;

    case 'C':
        printf("run!");
        break;

    case 'D':
        printf("slowly~");
        break;

    default:
        printf("what?");
        break;
    }

    return 0;
}