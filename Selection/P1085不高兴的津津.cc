#include <iostream>
using namespace std;

int main(void)
{
    int i, j, max = 8, re;
    int a[7], b[7], c[7];
    for (i = 0; i < 7; i++)
    {
        cin >> a[i] >> b[i];
    }
    for (i = 0; i < 7; i++)
    {
        c[i] = a[i] + b[i];
        if (c[i] > max)
        {
            re = i + 1;
            break;
        }
    }
    cout << re;
    return 0;
}