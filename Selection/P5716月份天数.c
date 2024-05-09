#include <stdio.h>
int main(void)
{
    int y, m;
    int mn[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30 ,31, 30 ,31};
    scanf("%d %d", &y, &m);
    if ((y % 4 == 0 && y % 100 !=0) || (y % 400 == 0))
        mn[1] = 29;
    
    printf("%d\n", mn[m - 1]);
    return 0;
}