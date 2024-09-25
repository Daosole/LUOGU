/*
模仿例题，打印出不同方向的正方形，然后打印三角形矩阵。中间有个空行。
01020304
05060708
09101112
13141516

      01
    0203
  040506
07080910
*/

#include <stdio.h>

int main(void)
{
    int n;
    int a = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%02d", a++);
        }
        printf("\n");
    }
    printf("\n");
    a = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= (n - i) * 2; j++) {
            printf(" ");
        } // 应该是j<=(n-i)*2，因为每个数都是2位
        while (a <= i * (i + 1) / 2) {
            printf("%02d", a++);
        }
        printf("\n");
    }
    return 0;
}