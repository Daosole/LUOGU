#include <iostream>
using namespace std;

// 定义学生结构体
struct Student {
    int score[20];  // 存储学生的分数
    int maxs, mins; // 存储学生的最高分和最低分
    int sum;        // 存储学生的总分
    float re;       // 存储学生的最终得分
};

int main()
{
    int n, m;
    cin >> n >> m;  // 输入学生人数n和每个学生的分数个数m
    Student stu[n]; // 创建学生数组
    for (int i = 0; i < n; i++) {
        stu[i].sum = 0;  // 初始化sum为0
        stu[i].maxs = 0;  // 初始化maxs为0
        stu[i].mins = 10;  // 初始化mins为10（假设分数范围是0-10）
        for (int j = 0; j < m; j++) {
            cin >> stu[i].score[j];  // 输入每个学生的分数
            stu[i].sum += stu[i].score[j];  // 累加分数到sum
            if (stu[i].score[j] > stu[i].maxs) stu[i].maxs = stu[i].score[j];  // 更新最高分
            if (stu[i].score[j] < stu[i].mins) stu[i].mins = stu[i].score[j];  // 更新最低分
        }
        // 计算去掉最高分和最低分后的平均分
        stu[i].re = float(stu[i].sum - stu[i].maxs - stu[i].mins) / (m - 2);
    }

    float max = stu[0].re;  // 初始化最大平均分为第一个学生的平均分
    for (int i = 1; i < n; i++) {
        if (stu[i].re > max) {
            max = stu[i].re;  // 更新最大平均分
        }
    }

    printf("%.2f", max);  // 输出最大平均分，保留两位小数

    return 0;
}
