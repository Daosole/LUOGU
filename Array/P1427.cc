// 倒序输出数组
#include <iostream>

using namespace std;

int main()
{
    int a[101];
    int num;
    
    int count = 0;
    while (cin >> num) {
        a[count++] = num;
        if (num == 0) {
            break;
        }
    }

    for (int i = count - 2; i >= 0; i--) {
        cout << a[i] << " ";
    }

    return 0;
}