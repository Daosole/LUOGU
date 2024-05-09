// 计数问题 统计 1 到 n 中 x 出现的次数
#include <stdio.h>
int main(void)
{
    int n, x;
    scanf("%d %d", &n, &x);
    int count = 0, t;
    for (int i = 1; i <= n; i++) {
        t = i;
        while (t) {
            if (t % 10 == x)
                count++;
            t /= 10;
        }
    }

    printf("%d", count);
    return 0;
}