/*
赦免战犯 使用递归 递归返回条件是矩阵大小为 1 每次进行矩阵分割
左上置 0 表示赦免
*/
#include <iostream>
#include <vector>

using namespace std;

// 定义全局二维数组来表示矩阵
int matrix[1025][1025];

// 递归函数，用于赦免战犯
void forgive(int x, int y, int size)
{
    // 基本情况：当矩阵大小为2x2时，赦免左上角
    if (size == 2) {
        matrix[x][y] = 0;
        return;
    }

    // 计算新的子矩阵大小
    int newSize = size / 2;

    // 将左上角子矩阵全部赦免（置0）
    for (int i = 0; i < newSize; i++) {
        for (int j = 0; j < newSize; j++) {
            matrix[x + i][y + j] = 0;
        }
    }

    // 对其他三个小矩阵递归调用
    forgive(x, y + newSize, newSize);         // 右上子矩阵
    forgive(x + newSize, y, newSize);         // 左下子矩阵
    forgive(x + newSize, y + newSize, newSize); // 右下子矩阵
}

int main()
{
    int n;
    cin >> n;  // 输入n，表示矩阵大小为2^n

    int size = 1 << n; // 计算实际矩阵大小，2^n 使用位移运算
    
    // 初始化矩阵，所有元素置1
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrix[i][j] = 1;
        }
    }

    // 调用赦免函数
    forgive(0, 0, size);

    // 输出最终矩阵
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}