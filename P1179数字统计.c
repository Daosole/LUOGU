#include <stdio.h>
int main(void)
{
    int L, R, n, i, count = 0;
    scanf("%d %d", &L, &R);
    for (n = L; n <= R; n++)
    {
        i = n;
        while (i != 0)
        {
            if (i % 10 == 2)
                count++;
            i = i / 10;
        }
    }
    printf("%d", count);
    return 0;
}