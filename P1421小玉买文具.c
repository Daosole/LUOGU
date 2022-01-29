#include <stdio.h>
int main(void)
{
    int a, b, count; // count 笔的数量
    float price = 1.9, m; // price 笔的价格，m 为所拥有的钱
    scanf("%d %d", &a, &b);
    m = a + b * 0.1;
    count = m / price;
    printf("%d\n", count);
    return 0;
}