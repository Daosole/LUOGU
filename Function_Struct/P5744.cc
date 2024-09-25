// 
#include <iostream>
#include <string>
#include <cstdio>
using namespace std;


struct Member {
    string name;
    int age;
    int score;
};

void train(struct Member *me)
{
    me->age += 1;
    me->score += me->score * 0.2;
    if (me->score > 600) {
        me->score = 600; // 题目要求 分数不能大于 600
    }
}

void Print(struct Member m )
{
    cout << m.name << " " << m.age << " " << m.score << endl;
}


int main()
{
    int n; // 学员个数
    cin >> n;
    Member mem[n];
    struct Member* p = mem; 
    for (int i = 0; i < n; i++) {
        cin >> mem[i].name >> mem[i].age >> mem[i].score;
    }

    for (int i = 0; i < n; i++) {
        // 结构体函数
        train(&mem[i]);
        // 打印
        Print(mem[i]);
    }

    return 0;
}