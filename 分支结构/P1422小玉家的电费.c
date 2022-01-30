#include <stdio.h>
int main(void)
{
    int a;
    float p1 = 0.4463, p2 = 0.4663, p3 = 0.5663;
    double price;
    scanf("%d", &a);
    if (a <= 150)
        price = a * p1; // under 150
    else if (a <= 400)
        price = (a - 150) * p2 + 150 * p1;
    else 
        price = (a - 400) * p3 + (400 - 150) * p2 + 150 * p1;
    
    printf("%.1lf\n", price);
    return 0;
}