// 数字反转
#include <stdio.h>
int main(void)
{
    float n;
    int i, a, b, c, d;
    scanf("%f", &n);
    i = n * 10;
    while (i != 0)
    {
        a = i % 10;
        i = i / 10;
        b = i % 10;
        i = i / 10;
        c = i % 10;
        i = i / 10;
        d = i % 10;
        i = i / 10;
    }
    n = a + b * 0.1 + c * 0.01 + d * 0.001;
    printf("%.3f", n);
    return 0;
}