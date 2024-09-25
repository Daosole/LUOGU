// 猴子吃桃子
#include <iostream>

using namespace std;

int peach(int n)
{
    int p = 1;
    for (int i = n - 1; i > 0; i--) {
        p = (p + 1) * 2;
    }
    return p;
}

int main()
{
    int day;
    cin >> day;
    cout << peach(day);

    return 0;
}