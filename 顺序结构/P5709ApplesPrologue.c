#include <stdio.h>
int main(void)
{
    unsigned m, t, s, n;
    int sum;
    scanf("%d %d %d", &m, &t, &s);
    if (t == 0)
        n = 0;
    sum = m * t;
    if (sum <= s)
        n = 0;
    else
    {
        if (s % t == 0)
            n = m - s / t;
        else
            n = m - s / t - 1;
    }
    printf("%d\n", n);
    return 0;
}