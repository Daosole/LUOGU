#include <stdio.h>
int main(void)
{
    unsigned int i, n, k, ca, cb; // sa 为 A 类数的和 sb 为 B 类数的和 ca, cb 用来统计 A B 类的个数
    double sa, sb, av_a, av_b;
    sa = sb = 0;
    ca = cb = 0;
    scanf("%d %d", &n, &k);
    for (i = 1; i <= n; i++)
    {
        if (i % k == 0)
        {
            sa += i;
            ca++;
        }
        else
        {
            sb += i;
            cb++;
        }
    }
    av_a = sa / ca;
    av_b = sb / cb;

    printf("%.1lf %.1lf\n", av_a, av_b);
    return 0;
}