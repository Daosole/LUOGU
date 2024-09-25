#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int yuwen;
    int math;
    int eng;
    int sum;
};

int main()
{
    int n;
    cin >> n; // n 个学生
    Student stu[n];
    for (int i = 0; i < n; i++) {
        cin >> stu[i].name >> stu[i].yuwen >> stu[i].math >> stu[i].eng;
        stu[i].sum = stu[i].yuwen + stu[i].math + stu[i].eng;
    }

    int max = 0;
    for (int i = 0; i < n; i++) {
        if (max < stu[i].sum) { // 使用 <= 而不是 < 来处理相同总分的情况
            max = stu[i].sum;
        }
    }

    for (int i = 0; i < n; i++) {
        if (stu[i].sum == max) {
            cout << stu[i].name << " " << stu[i].yuwen << " "
                 << stu[i].math << " " << stu[i].eng;
            return 0;
        }
    }

}