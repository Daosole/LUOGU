// 蛇形方阵
#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n; // 输入方阵的大小

    vector<vector<int>> matrix(n, vector<int>(n, 0)); // 创建n*n的二维数组
    int num = 1; // 从1开始填充数字
    int top = 0, bottom = n - 1, left = 0, right = n - 1; // 定义边界

    // 蛇形填充策略：按顺时针方向填充，每次填充完一条边后缩小边界
    while (num <= n * n) {
        for (int i = left; i <= right; i++) matrix[top][i] = num++;    // 填充顶行
        for (int i = ++top; i <= bottom; i++) matrix[i][right] = num++;  // 填充右列
        for (int i = --right; i >= left && top <= bottom; i--) matrix[bottom][i] = num++;  // 填充底行
        for (int i = --bottom; i >= top && left <= right; i--) matrix[i][left] = num++;    // 填充左列
        left++;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << setw(3) << matrix[i][j] << " ";
            // printf("%3d ", matrix[i][j]);
        }
        cout << endl;
    }

    return 0;
}