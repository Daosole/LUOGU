// 质因数分解
#include <iostream>

using namespace std;

int is_prime(int p);
int main()
{
    int num;
    cin >> num;
    int max_prime_factor = 1;
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            if (is_prime(i)) {
                max_prime_factor = i;
                while (num % i == 0) {
                    num /= i;
                }
            }
        }
    }
    
    if (num > 1) {
        max_prime_factor = num;
    }
    
    cout << max_prime_factor << endl;
    return 0;
}

int is_prime(int p)
{
    if (p <= 1) return 0;
    for (int i = 2; i * i <= p; i++) {
        if (p % i == 0) {
            return 0;
        }
    }
    return 1; // 是质数返回 1
}