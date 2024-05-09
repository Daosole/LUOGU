#include <stdio.h>
int main(void)
{
    double s = 0;
    int k, i = 0;
    scanf("%d", &k);
    do
    {
        s += 1.0 / ++i;
    } while (s <= k);
    printf("%d", i);
    return 0;
}