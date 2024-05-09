#include <stdio.h>
#include <math.h>
int main(void)
{
    float a, b, c, p;
    double s;
    scanf("%f %f %f", &a, &b, &c);
    p = (a + b + c) / 2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("%.1lf", s); // sqrt 的返回值为 double 类型，因此需要定义面积 s 为 double
    return 0;
}