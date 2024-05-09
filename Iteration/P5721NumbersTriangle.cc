// P5721 的 C++ 版本
#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
    int i, j, n, a = 1;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = i; j <= n; j++)
        {
            cout << setfill('0') << setw(2) << a++; 
            // setfill 设置填充的字符 setw 设置位宽
        }
        cout << endl;
    }
}