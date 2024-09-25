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
        if (max < stu[i].sum) { 
            max = stu[i].sum;
        }
    }

    for (int i = 0; i < n; i++) {
        if (stu[i].sum == max) {
            cout << stu[i].name << " " << stu[i].yuwen << " "
                 << stu[i].math << " " << stu[i].eng;
            return 0;
        }
    } // 以第一个达标的为准

}