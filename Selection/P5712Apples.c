#include <stdio.h>
int main(void)
{
    unsigned int x;
    scanf("%d", &x);
    if (x == 0)
        printf("Today, I ate %d apple.\n", x);
    else if (x == 1)
        printf("Today, I ate %d apple.\n", x);
    else
        printf("Today, I ate %d apples.\n", x);

    return 0;
}