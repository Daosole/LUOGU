// 游泳 

#include <stdio.h>

int main(void)
{
    float s; // 目标距离
    scanf("%f", &s);
    float dis = 2; // 游泳距离
    int count = 1; // 步数
    float step = 2;
    
    while (dis < s) {
        step = step * 0.98;
        dis = dis + step;
        count += 1;
    }
    
    printf("%d", count);

    return 0;
}