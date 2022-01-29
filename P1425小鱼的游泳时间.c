#include <stdio.h>
int main(void)
{
    int a, b, c, d, e, f;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (b > d)
    {
        e = c - a - 1;
        f = 60 - b + d;
    }
    else
    {
        e = c - a;
        f = d - b;
    }
    printf("%d %d\n", e, f);
    return 0;
}