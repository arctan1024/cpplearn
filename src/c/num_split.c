#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int mask = 1;
    int t = n;
    while (t > 0) {
        t /= 10;
        mask *= 10;
    }
    mask /= 10;
    while (mask > 0) {
        int result = n / mask;
        n %= mask;
        mask /= 10;
        printf("%d\n", result);
    }
    return 0;
}