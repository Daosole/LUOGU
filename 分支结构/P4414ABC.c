#include <stdio.h>
int main(void)
{
    int a, b, c, t;
    char x, y, z;
    scanf("%d %d %d", &a, &b, &c);
    getchar();
    x = getchar();
    y = getchar();
    z = getchar(); // 坑点，回车算字符，使用 scanf 会出错
    if (a > b)
    {
        t = a;
        a = b;
        b = t;
    }
    if (a > c)
    {
        t = a;
        a = c;
        c = t;
    }
    if (b > c)
    {
        t = b;
        b = c;
        c = t;
    }
    // ACB
    if (x == 'A' && y == 'C' && z == 'B')
    {
        t = b;
        b = c;
        c = t;
    }
    // BAC
    if (x == 'B' && y == 'A' && z == 'C')
    {
        t = a;
        a = b;
        b = t;
    }
    // BCA
    if (x == 'B' && y == 'C' && z == 'A')
    {
        t = a;
        a = b;
        b = t;
        t = b;
        b = c;
        c = t;
    }
    // CAB
    if (x == 'C' && y == 'A' && z == 'B')
    {
        t = a;
        a = c;
        c = t;
        t = b;
        b = c;
        c = t;
    }
    // CBA
    if (x == 'C' && y == 'B' && z == 'A')
    {
        t = a;
        a = c;
        c = t;
    }
    printf("%d %d %d\n", a, b, c);
    return 0;
}