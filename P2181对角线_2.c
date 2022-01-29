/* 四个顶点 两个对角线 一个对角线交点 所求根据排列组合来算 C(n,4) */
// factorial 可以化简公式
#include <stdio.h>
int main(void)
{
    unsigned long long n, result; // f4 为 4 的阶乘
    scanf("%lld", &n);
    result = n * (n - 1) / 2 * (n - 2) / 3 * (n - 3) / 4;
    printf("%lld\n", result);
    return 0;
}