#include <stdio.h>
int main(void)
{
    int a, b, c, t, i;
    char str[4];
    scanf("%d %d %d", &a, &b, &c);
    scanf("%s", str);
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
    for (i = 0; str[i] != '\0'; i++)
    {
        switch (str[i])
        {
        case 'A':
            printf("%d ", a);
            break;
        case 'B':
            printf("%d ", b);
            break;
        case 'C':
            printf("%d ", c);
            break;
        }
    }
    return 0;
}