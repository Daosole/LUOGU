#include <iostream>
using namespace std;
int main(void)
{
    double sn = 0.0;
    int k, i = 1;
    cin >> k;
    for (; sn <= k; i++)
    {
        sn += 1.0 / i;
    }
    cout << i - 1;
    return 0;
}