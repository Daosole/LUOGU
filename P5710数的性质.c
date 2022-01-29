/* 性质1 是偶数 
性质2 大于 4 且不大于12
*/
#include <stdio.h>
int main(void)
{
    int n;
    int xa, uim, ew, zm;
    xa = uim = ew = zm = 0; // 默认全部为 0
    scanf("%d", &n);
    if ((n % 2 == 0) && (n > 4 && n <= 12))
        xa = 1;
    if ((n % 2 == 0) || (n > 4 && n <= 12))
        uim = 1;
    if (((n % 2 == 0) && (n <= 4 || n > 12)) || (n % 2 != 0) && (n > 4 && n <= 12))
        ew = 1;
    if ((n % 2 != 0) && (n <= 4 || n > 12))
        zm = 1;
    
    printf("%d %d %d %d\n", xa, uim, ew, zm);
    return 0;
    
}