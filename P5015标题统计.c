#include <stdio.h>
int main(void)
{
    int i, count = 0;
    char str[50];
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'a' && str[i] <='z') || (str[i] >= 'A' && str[i] <='Z') || (str[i] >= '0' && str[i] <='9'))
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}