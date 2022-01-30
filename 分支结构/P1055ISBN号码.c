// 字符数字 - '0' 为数字， 数字 + '0' 成字符数字
#include <stdio.h>
int main(void)
{
    char s[14];
    int sum, r, i;
    scanf("%s", &s);
    sum = (s[0] - '0') * 1 + (s[2] - '0') * 2 + (s[3] - '0') * 3 + (s[4] - '0') * 4 + (s[6] - '0') * 5 + (s[7] - '0') * 6 + (s[8] - '0') * 7 + (s[9] - '0') * 8 + (s[10] - '0') * 9;
    r = sum % 11;
    if (r == 10)
        r = 'X';
    else
        r = r + '0';

    if (s[12] == r)
        printf("Right\n");
    else
    {
        s[12] = r;
        printf("%s\n", s);
    }
    return 0;
}