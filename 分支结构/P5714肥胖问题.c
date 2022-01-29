#include <stdio.h>
int main(void)
{
    double bmi, m, n; // m 表示体重，n 表示身高
    scanf("%lf %lf", &m, &n);
    bmi = m / (n * n);
    if (bmi < 18.5)
        printf("Underweight");
    if (bmi >= 18.5 && bmi < 24)
        printf("Normal");
    if (bmi >= 24)
    {
        printf("%lg\n", bmi);
        printf("Overweight");
    }
    return 0;
}