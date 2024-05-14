// P1307 数字反转

#include <stdio.h>

int main(void)
{
    int n, i = 0;
    scanf("%d", &n);
    if (n < 0) {
        printf("-");
        n = -n;
    }
    int sum = 0;
    if (n % 10 == 0) {
        n /= 10;
    }
    while (n != 0) {
        sum = sum * 10 + n % 10;
        n /= 10;
    }
    printf("%d", sum);

    return 0;
}