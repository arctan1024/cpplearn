#include <stdio.h>


int gcd(int a, int b) {
    // if (a < b) {
    //     int tmp = a;
    //     a = b;
    //     b = tmp;
    // }
    int c = a % b;
    if (c == 0) {
        return b;
    }
    return gcd(b, c);
}

int main() {
    int a, b;
    printf("请输入两个数字，用空格分开:\n");
    scanf("%d %d", &a, &b);
    int res = gcd(a, b);
    printf("%d", res);
    return 0;
}
