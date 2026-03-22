#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int count = 0;
int input;

int main() {
    srand(time(0));
    int a = rand() % 100 + 1;

    do {
        count++;
        printf("请猜测数字:");
        scanf("%d", &input);
        if (input > a) {
            printf("大了\n");
            continue;
        } else if (input < a) {
            printf("小了\n");
            continue;
        } else {
            printf("猜对了\n您猜了%d次\n", count);
            break;
        }
        } while (1);
        return 0;
}