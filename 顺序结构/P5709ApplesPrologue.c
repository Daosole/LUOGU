#include <stdio.h>
int main(void)
{
    unsigned m, t, s, n, m1;
    int sum;
    scanf("%d %d %d", &m, &t, &s);
    if (s == 0)
        n = m;
    sum = m * t;
    if (sum <= s)
        n = 0;
    else
    {
        m1 = s / t;
        n = m - m1;
    }
    printf("%d\n", n);
    return 0;
}