// 树木统计问题
#include <iostream>
#include <cstdio>
using namespace std;

int road[10001]; // 用于表示马路上每个位置是否有树

int main()
{
    int l; // 马路长度
    int m; // 区域数量
    cin >> l >> m;
    
    // 初始化马路，假设所有位置都有树
    for (int i = 0; i <= l; i++) {
        road[i] = 1; // 1 代表有树
    }

    int a, b; // 区域的起始和结束位置
    // 处理每个需要移走树木的区域
    for (int i = 0; i < m; i++) {
        // scanf("%d %d", &a, &b);
        cin >> a >> b;
        // 将区域内的树木移走
        for (int j = a; j <= b; j++) {
            road[j] = 0; // 0 代表没有树
        }
    }

    int tree = 0; // 统计剩余的树木数量
    // 计算剩余的树木
    for (int i = 0; i < l + 1; i++) {
        if (road[i] != 0) {
            tree++;
        }
    }

    // 输出结果
    cout << tree;

    return 0;
}