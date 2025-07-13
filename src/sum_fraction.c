#include <stdio.h>

int main() {
    int n;
    double result = 0;
    double factor = 1.0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        result += factor / i;
        factor = -factor;
    }
    printf("%f\n", result);
    return 0;
}