#include <stdio.h>
int main(void)
{
    int gcd(int, int);
    int a, b, c, t;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
    {
        t = a;
        a = b;
        b = t;
    }
    if (a > c)
    {
        t = a;
        a = c;
        c = t;
    }
    if (b > c)
    {
        t = b;
        b = c;
        c = t;
    }
    t = gcd(a, c);
    printf("%d/%d\n", a / t, c / t);
    return 0;
}

int gcd(int x, int y)
{
    int z;
    while (z != 0)
    {
        z = y % x;
        y = x;
        x = z;
    }
    return y;
}