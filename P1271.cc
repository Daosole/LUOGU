// 排序问题
#include <iostream>
using namespace std;

// 选择排序算法
void selectSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++) {
        int min_index = i; // 假设当前元素是最小的
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[min_index]) { // 找到更小的元素
                min_index = j;
            }
        }
        if (min_index != i) { // 交换元素
            int temp = a[i];
            a[i] = a[min_index];
            a[min_index] = temp;
        }
    }
}

// 冒泡排序算法
void bubbleSort(int a[], int n)
{
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) { // 交换元素
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

// 打印数组
void printArr(int a[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << a[i] << " "; 
    }
}

int main()
{
    int n, m; // n 候选人 候选号码 m 选票
    cin >> n >> m;
    int arr[m];
    for (int i = 0; i < m; i++) {
        cin >> arr[i]; // 输入选票
    }
    selectSort(arr, m); // 使用选择排序
    // bubbleSort(arr, m); // 使用冒泡排序
    printArr(arr, m); // 打印排序后的数组

    return 0;

}