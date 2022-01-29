#include <stdio.h>
int main(void)
{
    float t, tn; // t 总毫升 cola，tn 每个学生分到的 cola
    int n, c;
    scanf("%f %d", &t, &n);
    tn = t / n;
    c = n * 2;
    printf("%.3f\n", tn);
    printf("%d", c);
    return 0;
}