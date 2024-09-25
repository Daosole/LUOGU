#include <iostream>
using namespace std;

struct Student {
    int number;
    int aca_score;
    int ext_scroe;
    double score;
    int sum(struct Student S)
    {
        return S.aca_score + S.ext_scroe;
    }
};

void Judge(struct Student stu)
{
    if ((stu.sum(stu) > 140) && stu.score >= 80) {
        cout << "Excellent" << endl;
    } else {
        cout << "Not excellent" << endl;
    }
}

int main()
{
    int n; // n 个学生
    cin >> n;
    Student stu[n];
    for (int i = 0; i < n; i++) {
        cin >> stu[i].number >> stu[i].aca_score >> stu[i].ext_scroe;
        stu[i].score = stu[i].aca_score * 0.7 + stu[i].ext_scroe * 0.3;
    }

    for (int i = 0; i < n; i++) {
        // cout << stu[i].sum(stu[i]) << endl;
        Judge(stu[i]);
    }

    return 0;
}