#include <stdio.h>
int main(void)
{
    char s[101];
    scanf("%s", s);
    for (int i = 0; s[i] != '\0'; i++) {
        if ((s[i] >= 'a') && (s[i] <= 'z')) {
            s[i] -= 32;
            printf("%c", s[i]);
        } else
            printf("%c", s[i]);
    }
    return 0;
}