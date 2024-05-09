// 质数筛
#include <stdio.h>
unsigned int n;

int main(void)
{
    int prime(int a);
    scanf("%d", &n);
    int a[n];
    // 输入数值
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        // 如果不是质数 赋 0
        if (prime(a[i]) == 0) {
            a[i] = 0;
        }
    }

    // 输出
    for (int i = 0; i < n; i++) {
        if (a[i] != 0)
            printf("%d ", a[i]);
    }

    return 0;
}

int prime(int a)
{
    int flag = 1;
    if (a == 0 || a == 1)
        flag = 0;
    if (a == 2)
        flag = 1;
    else {
        for (int i = 2; i * i <= a; i++) {
            if (a % i == 0) {
                flag = 0;
                break;
            }
        }
    }
    return flag;
}