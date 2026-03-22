#include <stdio.h>

int sum = 0;
int a;
double n = 0.0;

int main() {
    printf("请输入数字（输入负数结束）\n");
    do {
        scanf("%d", &a);
        n++;
        sum += a;
    } while (a >= 0);
    printf("平均值为%f\n", sum / n);
    return 0;
}