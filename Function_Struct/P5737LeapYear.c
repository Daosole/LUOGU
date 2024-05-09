// 输入 x,y，输出 [x,y][x,y] 区间中闰年个数，并在下一行输出所有闰年年份数字，使用空格隔开。
#include <stdio.h>
int main(void)
{
    int x, y;
    int count = 0;
    scanf("%d %d", &x, &y);
    if (x > y) {
        int temp;
        temp = x;
        x = y;
        y = temp;
    }
    int isLeap(int n);
    for (int i = x; i <= y; i++) {
        if (isLeap(i) == 1)
            count++;
    }
    printf("%d\n", count);
    for (int i = x; i <= y; i++) {
        if (isLeap(i) == 1)
            printf("%d ", i);
    }

    return 0;
}

int isLeap(int n)
{
    if ((n % 4 == 0 && n % 100 != 0) || (n % 400) == 0)
        return 1;
    else
        return 0;
}