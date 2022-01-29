#include <stdio.h>
int main(void)
{
    int A, B, C, score; // A 作业成绩，B 小测成绩，C 期末考试成绩
    scanf("%d %d %d", &A, &B, &C);
    score = A * 0.2 + B * 0.3 + C * 0.5;
    printf("%d", score);
    return 0;
}