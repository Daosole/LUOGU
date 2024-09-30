// 质数口袋 埃拉托斯特尼筛法
// 1 < L < 10^5
#include <cstdio>
#include <iostream>

using namespace std;

// 定义最大范围
const int N = 100005;

// 存储质数的数组
int prime[100005];
// 标记是否为质数的布尔数组
bool is_prime[100005];

// 埃拉托斯特尼筛法实现
void Eratosthenes()
{
    int p = 0;
    is_prime[0] = is_prime[1] = false; // 0和1不是质数
    for (int i = 2; i <= N; i++) {
        is_prime[i] = true; // 初始化，假设所有数都是质数
    }

    for (int i = 2; i <= N; i++) {
        if (is_prime[i]) {
            prime[p++] = i; // 如果i是质数，将其添加到prime数组
        }

        // 将i的倍数标记为非质数
        for (long long j = (long long)i * i; j <= N; j += i) {
            is_prime[j] = false;
        }
    }
}

int main()
{
    Eratosthenes(); // 生成质数表
    int l;
    int count = 0;
    int sum = 0;
    int i = 0;
    cin >> l; // 输入上限L

    // 特殊情况处理
    if (l < 2) {
        cout << 0 << endl; // 小于2时没有质数
        return 0;
    }

    if (l == 2) {
        cout << 1 << endl; // 只有2是质数
        return 0;
    }

    // 输出质数并计算和
    while (1) {
        cout << prime[i] << endl; // 输出当前质数

        i++;
        l = l - prime[i]; // 减去当前质数
        if (l < 0)
            break; // 如果和超过L，退出循环
    }
    cout << i << endl; // 输出质数的个数

    return 0;
}