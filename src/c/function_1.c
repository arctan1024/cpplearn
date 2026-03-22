#include <stdio.h>

void sum10(int begin, int end)
{   int i = 0;
    for(; begin <= end; begin++) {
        i += begin;
    }
    printf("%d\n", i);
}

int main() {
    sum10(1, 10);
    sum10(11, 20);
    sum10(21, 30);
    return 0;
}