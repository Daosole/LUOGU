#include <iostream>
using namespace std;
#define N 1000
int main(void)
{
    int a[N], i, j, n;
    cin >> n;
    i = 0;
    while (n != 1)
    {
        a[i] = n;
        if (n % 2 == 0)
            n = n / 2;
        else
            n = n * 3 + 1;
        i++;
    }
    a[i] = 1;
    for (j = i; j >= 0; j--)
    {
        cout << a[j] << " ";
    }
    return 0;
}