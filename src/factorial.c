#include <stdio.h>

int main() {
    int n;
    int result = 1;
    printf("输入数字:");
    scanf("%d", &n);
    // int o = n;
    // while (n > 0) {
    //     result *= n;
    //     n--;
    // }
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    printf("%d! = %d\n", n, result);
    return 0;
}