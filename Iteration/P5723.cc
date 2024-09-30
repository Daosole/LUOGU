// 质数口袋 (Prime Pocket)
#include <iostream>
using namespace std;

// 判断一个数是否为质数
int isPrime(int n) {
    if (n <= 1) return 0;  // 1和小于1的数不是质数
    if (n == 2) return 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;  // 如果能被整除，不是质数
        }
    }
    return 1;  // 是质数
}

int main(void) {
    int L;
    cin >> L;  // 输入上限L
    if (L < 2) {
        cout << 0 << endl;  // 如果L小于2，没有质数，直接输出0
    }
    int sum = 0;   // 质数和
    int count = 0; // 质数计数
    for (int i = 2; i <= L && sum < L; i++) {
        if (isPrime(i)) {
            sum += i;    // 累加质数
            count++;     // 增加质数计数
            cout << i << endl;  // 输出当前质数
        }
    }
    cout << count << endl;  // 输出质数的总数

    return 0;
}