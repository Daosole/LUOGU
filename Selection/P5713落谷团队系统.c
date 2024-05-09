#include <stdio.h>
int main(void)
{
    int a = 5, b = 3;
    int n, sa, sb; // sa 为本地时间
    scanf("%d", &n);
    sa = a * n;
    sb = 11 + b * n;
    if (sa < sb)
        printf("Local\n");
    else 
        printf("Luogu\n");
    return 0;
}