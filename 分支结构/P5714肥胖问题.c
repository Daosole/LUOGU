#include <stdio.h>
int main(void)
{
    float bmi;
    float m, n; // m 表示体重，n 表示身高
    scanf("%f %f", &m, &n);
    bmi = m / (n * n);
    if (bmi < 18.5)
        printf("Underweight\n");
    else if (bmi < 24)
        printf("Normal\n");
    else
    {
        printf("%f\n", bmi);
        printf("Overweight");
    }
    return 0;
}