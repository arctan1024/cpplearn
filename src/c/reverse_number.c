#include <stdio.h>

int main() {
    int n;
    printf("请输入数字:");
    scanf("%d", &n);
    int reversed = 0;
    while (n > 0) {
        int q = n % 10;
        printf("%d", q);
        n /= 10;
        reversed = reversed * 10 + q;
    }
    //printf("%d\n", reversed);
    return 0;
}