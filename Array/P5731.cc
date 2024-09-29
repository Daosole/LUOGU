// 蛇形方阵
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n; // 输入方阵的大小

    int matrix[n][n]; // 创建n*n的二维数组
    int num = 1; // 从1开始填充数字
    int top = 0, bottom = n - 1, left = 0, right = n - 1; // 定义边界

    while (num <= n * n) {
        // 从左到右填充顶行
        for (int i = left; i <= right; i++) {
            matrix[top][i] = num;
            num += 1;
        }
        top += 1;

        // 从上到下填充右列
        for (int i = top; i <= bottom; i++) {
            matrix[i][right] = num;
            num += 1;
        }
        right -= 1;

        if (top <= bottom) {
            // 从右到左填充底行
            for (int i = right; i >= left; i--) {
                matrix[bottom][i] = num;
                num += 1;
            }
            bottom -= 1;
        }

        if (left <= right) {
            // 从下到上填充左列l
            for (int i = bottom; i >= top; i--) {
                matrix[i][left] = num;
                num += 1;
            }
            left += 1;
        }
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