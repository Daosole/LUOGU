#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int i;
    double pa, pb, re;
    double base1, base2;
    pa = base1 = (1 + sqrt(5)) / 2;
    pb = base2= (1 - sqrt(5)) / 2;
    for (i = 2; i <= n; i++) {
        pa = pa * base1;
        pb = pb * base2;
    }
    // pa = pow(pa, n);
    // pb = pow(pb, n);

    re = (pa - pb) / sqrt(5);
    cout.setf(ios::fixed);
    cout << fixed << setprecision(2) << re << endl;

    return 0;
}