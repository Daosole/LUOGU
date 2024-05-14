// P1307 数字反转

#include <stdio.h>

int main(void)
{
    int n, i = 0;
    scanf("%d", &n);
    if (n < 0) {
        printf("-"); // 如果是负数 先打印负号
        n = -n;  // 将所有情况按正数处理
    }
    int sum = 0;
    if (n % 10 == 0) {
        n /= 10; // 处理末尾为 0 的情况
    }
    while (n != 0) {  // 反转
        sum = sum * 10 + n % 10;
        n /= 10;
    }
    printf("%d", sum);

    return 0;
}