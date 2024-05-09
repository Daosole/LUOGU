// 错误原因为 i 最小为 2。但是题目里没有保证 n≥2，所以，当 n≤2 时会出现错误。
#include <stdio.h>

int main(void)
{
    int judgePrime(int);
    unsigned int n;
    scanf("%d", &n);
    if (n < 2) {
        printf("0\n");
        return 0;
    } else if (n == 2) {
        printf("2\n1\n");
        return 0;
    }
    int sum = 0, count = 0;
    for (int i = 2; i <= n; i++) {
        if (judgePrime(i) == 1) {
            sum += i;
            count++;
            printf("%d\n", i);
        }
        if (sum >= n)
            break;
    }

    printf("%d", count);

    return 0;
}

int judgePrime(int p)
{
    int flag = 1;
    if (p == 0 || p == 1)
        flag = 0;
    if (p == 2)
        flag = 1;
    else {
        for (int i = 2; i * i <= p; i++) {
            if (p % i == 0) {
                flag = 0;
                break;
            }
        }
    }
    return flag;
}