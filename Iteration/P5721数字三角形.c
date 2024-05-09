#include <stdio.h>
int main(void)
{
    int i, j, n;
    int a = 1;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = i; j <= n; j++)
        {
            printf("%02d", a++); // pirntf %02d 在不足两位数字前面补零
        }
        printf("\n");
    }

    return 0;
}