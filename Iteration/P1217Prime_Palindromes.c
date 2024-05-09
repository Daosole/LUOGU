// 回文质数
#include <stdio.h>

int main(void)
{
    unsigned int a, b;
    scanf("%d %d", &a, &b);
    int judgePalin(int);
    int prime(int);
    for (int i = a; i <= b; i++) {
        if (i % 2 == 0)
            continue;
        if (judgePalin(i) == 1 && prime(i) == 1) {
            printf("%d\n", i);
        }
    }

    return 0;
}

int judgePalin(int num)
{
    int judgeDigit(int);
    int n;
    n = judgeDigit(num);
    int a[n], b[n];
    int ta = num;
    for (int i = 0; i < n; i++) {
        a[i] = ta % 10;
        ta /= 10;
    }
    for (int i = n - 1; i >= 0; i--) {
        b[i] = num % 10;
        num /= 10;
    }
    int j = 0, flag = 1;
    while (j < n) {
        if (a[j] == b[j])
            j++;
        else {
            flag = 0;
            break;
        }
    }

    return flag;
}

int judgeDigit(int jd)
{
    int digit = 1;
    while (jd /= 10)
        digit++;

    return digit; // 返回位数
}

int prime(int p)
{
    int flag = 1;
    if (p == 0 || p == 1)
        flag = 0;
    else {
        for (int i = 2; i * i <= p; i++) {
            if (p % i == 0) {
                flag = 0;
                break;
            }
        }
    }
    return flag; // 是质数返回 1
}