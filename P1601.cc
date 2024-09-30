// 高精度 A+B
#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

// 定义数组长度，足够存储500位数字
static const int LEN = 502;

// 定义三个数组，分别用于存储两个加数和结果
int a[LEN], b[LEN], c[LEN];

// 清空数组函数
void clear(int a[])
{
    for (int i = 0; i < LEN; i++)
        a[i] = 0;
}

// 读取大数并存储到数组中
void read(int a[])
{
    clear(a);
    char s[LEN + 1];
    
    scanf("%s", s);

    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        a[len - i - 1] = s[i] - '0';
    } // a[] 从 a[0] 存放，个位在最低位
}

// 打印大数
void print(int a[])
{
    int i;
    for (i = LEN - 1; i >= 1; i--) { // i >= 1 条件很关键，确保不会跳过个位数 
        if (a[i] != 0)
            break;
    }
    for (; i >= 0; i--) {
        putchar(a[i] + '0');
    }
    putchar('\n');
}

// 大数加法函数
void add(int a[], int b[], int c[])
{
    clear(c);
    
    for (int i = 0; i < LEN; i++) {
        c[i] += a[i] + b[i];
        if (c[i] >= 10) {
            // c[i + 1] = c[i] / 10;
            // c[i] %= 10;
            c[i + 1] += 1;
            c[i] -= 10;
        }
    }
}

int main()
{
    // 读取两个大数
    read(a);
    read(b);

    // 执行加法运算
    add(a, b, c);
    // 打印结果
    print(c);

    return 0;
}