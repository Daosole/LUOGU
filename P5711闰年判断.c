/*
判断闰年的条件是能被 4 整除，不被 100 整除，或者被 400 整除 
*/
#include <stdio.h>
int main(void)
{
    int year, re;
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        re = 1; // 是闰年
    else 
        re = 0;
    printf("%d\n", re);
    return 0;
}