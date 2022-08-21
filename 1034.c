#include<stdio.h>
#include<string.h>

int main(void)
{
    char str[1001000];
    int answer = 0, len;

    //scanf("%o",&n);
    //printf("%d",n);

    scanf("%s", str);
    
    len = strlen(str);
    for (int i = len - 1, j = 1; i>=0; --i, j *= 8)
    {
        answer += (str[i] - '0') * j;
    }
    
    printf("%d", answer);
    return 0;
}