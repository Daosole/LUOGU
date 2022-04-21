#include <iomanip>
#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int T;
    cin >> T;
    if (T == 1)
    {
        cout << "I love Luogu!";
    }
    else if (T == 2)
    {
        cout << 2 + 4 << " " << 10 - 2 - 4;
    }
    else if (T == 3)
    {
        int a, b, c;
        a = 14 / 4;
        b = 14 - 14 % 4;
        c = 14 % 4;
        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
    }
    else if (T == 4)
    {
        double n;
        n = 500 / 3.0;
        cout << setprecision(6) << n;
    }
    else if (T == 5)
    {
        cout << 15;
    }
    else if (T == 6)
    {
        cout << sqrt(36 + 81);
    }
    else if (T == 7)
    {
        cout << 100 + 10 << endl;
        cout << 100 + 10 - 20 << endl;
        cout << 0 << endl;
    }
    else if (T == 8)
    {
        double pi = 3.141593, r = 5;
        cout << 2 * pi * r << endl;
        cout << pi * r * r << endl;
        cout << (4 * pi * r * r * r) / 3 << endl;
    }
    else if (T == 9)
    {
        cout << 22;
    }
    else if (T == 10)
    {
        cout << 9;
    }
    else if (T == 11)
    {
        cout << 1.0 * 100 / 3;
    }
    else if (T == 12)
    {
        cout << 13 << endl;
        cout << 'R' << endl;
    }
    else if (T == 13)
    {
        // double pi = 3.141593, V;
        // V = 4 * pi * (4 * 4 * 4 + 10 * 10 * 10) / 3;
        // cout << (int)pow(V, 1.0 / 3);
        cout << 16;
    }
    else if (T == 14)
    {
        cout << 50;
    }
    return 0;
}