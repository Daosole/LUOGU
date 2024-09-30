//
#include <stdio.h>

int main(void)
{
    int judgePrime(int);
    unsigned int L;
    scanf("%d", &L);
    if (L < 2) {
        printf("0\n");
    }
    int sum = 0;
    int count = 0;
    int i = 2;
    while (sum <= L) {
        if (L == 2) {
            printf("2\n");
        } else {
            
            if (judgePrime(i) == 1) {
                sum += i;
                count++;
                printf("%d\n", i);
            }
            
        }
        i++;
    }

    printf("%d", count);

    return 0;
}

int judgePrime(int p)
{
    int flag = 1;
    if (p == 0 || p == 1)
        flag = 0;
    if (p == 2)
        flag = 1;
    else {
        for (int i = 2; i * i <= p; i++) {
            if (p % i == 0) {
                flag = 0;
                break;
            }
        }
    }
    return flag;
}