// 彩票摇奖
#include <iostream>
#include <vector>
using namespace std;

int win_num[7]; // 中奖号码

int main()
{
    int n; // 购买彩票张数
    cin >> n;
    // 输入中奖号码
    for (int i = 0; i < 7; i++) {
        cin >> win_num[i];
    }

    vector<int>buy_num(7);  // 存储每张彩票的号码
    vector<int>prize_counts(7, 0);  // 存储各等奖的中奖数量，初始化为0

    // 处理每张彩票
    for (int i = 0; i < n; i++) {
        // 输入当前彩票的号码
        for (int j = 0; j < 7; j++) {
            cin >> buy_num[j];
        }
        int count = 0;  // 记录当前彩票中中奖号码的数量
        // 检查当前彩票的每个号码是否中奖
        for (int j = 0; j < 7; j++) {
            for (int k = 0; k < 7; k++) {
                if (buy_num[j] == win_num[k]) {
                    count += 1;
                }
            }
        }
        // prize_counts[7 - count] = 1; 不能 AC
        prize_counts[7 - count]++; // AC 代码
    }

    // 输出各等奖的中奖数量
    for (int i = 0; i < 7; i++) {
        cout << prize_counts[i] << " ";
    }
    
    return 0;
}