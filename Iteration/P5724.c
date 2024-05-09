// 求极差
#include <stdio.h>
int n;

int main(void)
{
    scanf("%d", &n);
    int a[n];
    int max, min, res;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    max = min = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }
    res = max - min;

    printf("%d", res);

    return 0;
}