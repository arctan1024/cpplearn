#include <stdio.h>

int a = 5;
int b = 6;

int main() {
    int t = a;
    a = b;
    b = t;
    printf("a = %d\nb = %d\n", a, b);
    return 0;
}