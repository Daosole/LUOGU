/*
如果天数是 6 或 7 不加。天数到 7 之后，重新赋值为 1，否则继续天数累加
*/
#include <stdio.h>
int main(void)
{
    int x, n, i;
    long sum = 0;
    scanf("%d %d", &x, &n);
    for (i = 1; i <=n; i++)
    {
        if (x != 6 && x != 7)
            sum += 250;
        if (x == 7)
            x = 1;
        else 
            x++;
    }
    printf("%ld\n", sum);
    return 0;
}