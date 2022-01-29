/* 四个顶点 两个对角线 一个对角线交点 所求根据排列组合来算 C(n,4) */
// factorial
#include <stdio.h>
int main(void)
{
    long fac(int x);
    long n, m, f4, result; // f4 为 4 的阶乘
    scanf("%d", &n);
    m = n - 4;
    f4 = 4 * 3 * 2 * 1;
    result = fac(n) / (f4 * fac(m));
    printf("%ld\n", result);
    return 0;
}

long fac(int x)
{
    int i, f = 1;
    for (i = 2; i <= x; i++)
    {
        f = f * i;
    }
    return f;
}