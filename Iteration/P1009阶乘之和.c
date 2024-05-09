#include <stdio.h>
int main(void)
{
    long long fac(int x);
    int n, i;
    scanf("%d", &n);
    unsigned long long sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum = sum + fac(i);
    }
    printf("%llu", sum);
    return 0;
}
long long fac(int x)
{
    int i;
    long long f = 1;
    if (x == 1)
        f = 1;
    else
    {
        for (i = 1; i <= x; i++)
        {
            f = f * i;
        }
    }

    return f; 
}