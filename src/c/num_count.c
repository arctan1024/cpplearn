#include <stdio.h>

int main() {
    int num;
    int nums[10] = {0};
    while (1) {
        printf("Please enter a number between 0 and 9, or -1 to exit.\n");
        scanf("%d", &num);
        if (num == -1) {
            for (int i = 0; i < 10; i++) {
                printf("%d: %d\n", i, nums[i]);
            }
            return 0;
        }
        if (num >= 0 && num < 10) {
            nums[num]++;
        } else {
            printf("Invalid input!");
        }
    }
}