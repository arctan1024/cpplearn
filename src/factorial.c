#include <stdio.h>

int main() {
    int n;
    int result = 1;
    printf("输入数字:");
    scanf("%d", &n);
    int o = n;
    while (n > 0) {
        result *= n;
        n--;
    }
    printf("%d! = %d\n", o, result);
    return 0;
}