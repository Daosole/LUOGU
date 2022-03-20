#include <iostream>
using namespace std;
int main(void)
{
    int n, sum = 0, i;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << sum;
    return 0;
}