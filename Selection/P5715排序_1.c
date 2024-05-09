// 冒泡排序
#include <stdio.h>
#define N 3
int main(void)
{
    int a[N], i, j, t;
    for (i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (a[i] < a[j])
            {
                t = a[i];
                a[i] = a[j];
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