#include <iostream>
using namespace std;

int fac(int n)
{
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * fac(n - 1);
}

int main(void)
{
    int n;
    int re;
    cin >> n;
    re = fac(n);
    cout << re << endl;

    return 0;
}