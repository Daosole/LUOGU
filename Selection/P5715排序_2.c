// 选择排序
#include <stdio.h>
#define N 3
int main(void)
{
    int a[N], i, j, t, min;
    for (i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < N; i++)
    {
        min = i;
        for (j = i + 1; j < N; j++)
        {
            if (a[min] > a[j])
            {
                t = a[min];
                a[min] = a[j];
                a[j] = t;
            }
        }
    }

    for (i = 0; i < N; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}