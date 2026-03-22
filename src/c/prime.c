#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n);

bool is_prime(int n) {
    int i = 1;
    while (i <= n) {
        if (n % i == 0 && i > 1 && i < n) {
            return false;
        }
        i++;
    }
    return true;
}

int main() {
    int max = 999999;
    int n = 2;
    while (n < max) {
        if (is_prime(n)) {
            printf("%d,", n);
        }
        n++;
    }
    return 0;
}
