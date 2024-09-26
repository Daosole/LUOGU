// 数组：小鱼比可爱
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;  // 输入鱼的数量
    int a[n];  // 存储每条鱼的可爱程度
    int b[n];  // 存储每条鱼左边比它小的鱼的数量
    
    // 输入每条鱼的可爱程度
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    b[0] = 0;  // 第一条鱼左边没有其他鱼，所以为0
    int count;
    
    // 计算每条鱼左边比它小的鱼的数量
    for (int i = 1; i < n; i++) {
        count = 0;
        for (int j = 0; j < i; j++) {
            if (a[j] < a[i]) {
                count++;
            }
        }
        b[i] = count;
    }

    // 输出结果
    for (int i = 0 ; i < n; i++) {
        cout << b[i] << " ";
    }

    return 0;
}