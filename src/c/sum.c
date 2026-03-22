#include <stdio.h>

int sum(int begin, int end);
int max(int a, int b);
int min(int , int );

int main() {
    int a,b;
    scanf("%d %d",&a, &b);
    int result_1 = sum(min(a,b), max(a,b));
    int result_2 = sum(max(a,b), result_1);
    printf("%d\n%d\n", result_1, result_2);
    return 0;
}

int sum(int begin, int end) {
    int ret = 0;
    for(; begin <= end; begin++) {
        ret += begin;
    }
    return ret;
}

int max(int a, int b) {
    int larger;
    if (a > b) {
        larger = a;
    } else {
        larger = b;
    }
    return larger;
}

int min(int a, int b) {
    int smaller;
    if (a < b) {
        smaller = a;
    } else {
        smaller = b;
    }
    return smaller;
}