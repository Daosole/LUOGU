// 集合元素求和
// sum = (s1+s2+...+sn)*2^(n-1)
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

long long element_sum(int a[], int n)
{
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }

    return sum << (n - 1);
}

int main()
{
    int s[1001];
    int num;
    int count = 0;
    while (cin >> num){
        s[count] = num;
        count++;
    }

    
    cout << (long long)element_sum(s, count);

    return 0;
}