#include <stdio.h>

int n = 0;
int x;

int main() {
    scanf("%d", &x);
    do {
        x /= 10;
        n++;
    } while (x > 0);
    printf("您输入了一个%d位数\n", n);
    return 0;
}