#include <stdio.h>
int n; // n 为总数量
int main(void)
{
    long price(int x, int y);
    long minp; // 最少的价格
    int a, b, c, ap, bp, cp, A, B, C; // 数量 单价 总价格

    scanf("%d", &n);
    scanf("%d %d", &a, &ap);
    scanf("%d %d", &b, &bp);
    scanf("%d %d", &c, &cp);
    A = price(a, ap);
    B = price(b, bp);
    C = price(c, cp);
    minp = A;
    if (minp > B)
        minp = B;
    if (minp > C)
        minp = C;
    printf("%ld\n", minp);
    return 0;
    
}

long price(int x, int y)
{
    int i = 1, sum = x;
    while (sum < n)
    {
        sum += x;
        i++; // i 为所要购买多少件该物品
    }
    return i * y;
}