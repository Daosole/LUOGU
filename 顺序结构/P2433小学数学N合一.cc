#include <iostream>
#include <iomanip>
#include <math.h>
// 填上你觉得需要的其他头文件
using namespace std;
int main()
{
    int T;
    cin >> T;
    if (T == 1)
    {
        // 粘贴问题 1 的主函数代码，除了 return 0
        cout << "I love Luogu!";
    }
    else if (T == 2)
    {
        // 粘贴问题 2 的主函数代码，除了 return 0
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
        // 请自行完成问题 3 的代码
    }
    else if (T == 4)
    {
        double n;
        n = 500 / 3.0;
        cout << setprecision(6) << n;
        // 请自行完成问题 4 的代码
    }
    else if (T == 5)
    {
        cout << 15;
        // 请自行完成问题 5 的代码
    }
    else if (T == 6)
    {
        cout << 10;
        // 请自行完成问题 6 的代码
    }
    else if (T == 7)
    {
        cout << 100 + 10 << endl;
        cout << 100 + 10 - 20 << endl;
        cout << 0 << endl;
        // 请自行完成问题 7 的代码
    }
    else if (T == 8)
    {
        double pi = 3.141593, r = 5;
        cout << 2 * pi * r << endl;
        cout << pi * r * r << endl;
        cout << (4 * pi * r * r * r) / 3 << endl;
        // 请自行完成问题 8 的代码
    }
    else if (T == 9)
    {
        cout << 22;
        // 请自行完成问题 9 的代码
    }
    else if (T == 10)
    {
        cout << 9;
        // 请自行完成问题 10 的代码
    }
    else if (T == 11)
    {
        cout << 1.0 * 100 / 3;
        // 请自行完成问题 11 的代码
    }
    else if (T == 12)
    {
        cout << 13 << endl;
        cout << 'S' << endl;
        // 请自行完成问题 12 的代码
    }
    else if (T == 13)
    {
        double pi = 3.141593, V;
        V = 4 * pi * (4 * 4 * 4 + 10 * 10 * 10) / 3;
        cout << (int)pow(V, 1.0 / 3);
        // 请自行完成问题 13 的代码
    }
    else if (T == 14)
    {
        cout << 50;
        // 请自行完成问题 14 的代码
    }
    return 0;
}