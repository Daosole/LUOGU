#include <iostream>
using namespace std;

int main(void)
{
    int i, j, max = 8, re, sum = 0;
    int a[7][2];
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cin >> a[i][j];
        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            sum += a[i][j];
        }
        if (sum >= 9)
        {
            re = i + 1;
            break;
        }
    }
    cout << re;
    return 0;

}