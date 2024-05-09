// 回文质数

/*
使用暴力方法破解 达不到时间要求 查看题解 
*/
#include <stdio.h>

int main(void)
{
    long a, b;
    scanf("%ld %ld", &a, &b);
    int is_palindrome(long); // 判断回文
    int is_prime(long); // 判断素数
    for (long i = a; i <= b; i++) {
        if (i % 2 == 0)
            continue;
        if (is_palindrome(i) == 1 && is_prime(i) == 1) {
            printf("%ld\n", i);
        }
    }

    return 0;
}

int is_palindrome(long num)
{
    long original = num;
    long sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum = sum * 10 + digit;
        num /= 10;
    }

    return original == sum;
}

int is_prime(long p)
{
    int flag = 1;
    if (p == 0 || p == 1)
        flag = 0;
    else {
        for (int i = 2; i * i <= p; i++) {
            if (p % i == 0) {
                flag = 0;
                break;
            }
        }
    }
    return flag; // 是质数返回 1
}