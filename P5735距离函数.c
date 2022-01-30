#include <stdio.h>
#include <math.h>
int main(void)
{
    double x1, y1, x2, y2, x3, y3;
    double d1, d2, d3, c;
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);
    scanf("%lf %lf", &x3, &y3);
    d1 = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    d2 = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
    d3 = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
    c = d1 + d2 + d3;
    printf("%.2lf\n", c);
    return 0;
}