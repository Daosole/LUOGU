#include <stdio.h>
int main(void)
{
    long a;
    int d = 1;
    scanf("%ld", &a);
    while (a != 1)
    {
        a = a / 2;
        d++;
    }
    printf("%d\n", d);
    return 0;
}