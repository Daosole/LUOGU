// 数字反转
#include <stdio.h>
int main(void)
{
    char str[6];
    int i;
    for (i = 0; i < 6; i++)
    {
        scanf("%c", &str[i]);
    }
    for (i = 6; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    return 0;
    
}