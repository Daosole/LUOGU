#include <stdio.h>
#define N 1000
int main(void)
{
    int a[N], n;
    int i = 0, j;
    scanf("%d", &n);
    while (n != 1)
    {
        a[i] = n;
        if (n % 2 == 0)
            n = n / 2;
        else
            n = n * 3 + 1;
        i++; // i 用来计数
    }
    a[i] = 1;
    for (j = i; j >= 0; j--)
    {
        printf("%d ", a[j]);
    }
    return 0;
}
/*
解体思路 用数组来存放每个数，使用i 来计循环次数，最后要给 a[i] 赋值 1
*/