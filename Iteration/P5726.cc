// 打分

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;
    int maxs = 0;
    int mins = 11;
    float re;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
        if (arr[i] > maxs) {
            maxs = arr[i];
        }
        if (arr[i] < mins) {
            mins = arr[i];
        }
    }
    
    re = (sum - maxs - mins) * 1.0 / (n - 2);
    
    printf("%.2f", re);

    return 0;
}