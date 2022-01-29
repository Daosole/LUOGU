/* 四个顶点 两个对角线 一个对角线交点 所求根据排列组合来算 C(n,4) */
// factorial 可以化简公式
#include <stdio.h>
int main(void)
{
    unsigned long n, f4, result; // f4 为 4 的阶乘
    scanf("%ld", &n);
    f4 = 4 * 3 * 2 * 1;
    result = (n * (n - 1) * (n - 2) * (n - 3)) / f4;
    printf("%ld\n", result);
    return 0;
}