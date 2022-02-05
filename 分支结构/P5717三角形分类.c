#include <stdio.h>
int main(void)
{
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
    if (a + b > c)
    {
        if (a * a + b * b == c * c)
            printf("Right triangle\n");
        if (a * a + b * b > c * c)
            printf("Acute triangle\n"); // 锐角三角形
        if (a * a + b * b < c * c)
            printf("Obtuse triangle\n"); // 钝角三角形
        if (a == b)
            printf("Isosceles triangle\n"); // 等腰
        if (a == b && b == c && a == c)
            printf("Equilateral triangle\n"); // 等边
    }
    else
        printf("Not triangle\n");

    return 0;
}