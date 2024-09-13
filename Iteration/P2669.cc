// 金币问题
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int n, k; // n 为天数， k 为 n 处于的某个阶段
    int coins = 0; // 金币
    cin >> n;
    k = ceil((sqrt(1 + 8 * n) - 1) / 2);
    for (int i = 1; i < k; i++) {
        coins = coins + i * i;
    }
    coins = coins + n * k - (k * k * (k - 1)) / 2; // 前 k - 1 全部 + 第 k 部分
    cout << coins;

    return 0;
}