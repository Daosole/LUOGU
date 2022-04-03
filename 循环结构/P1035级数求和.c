#include <stdio.h>
int main(void)
{
    double s = 0, term;
    int k, i = 0;
    scanf("%d", &k);
    do
    {
        term = 1.0 / ++i;
        s += term;
    } while (s <= k);
    printf("%d", i);
    return 0;
}