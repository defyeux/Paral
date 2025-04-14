#include <stdio.h>

int prime(int x);

int main() {
    printf("Prime numbers between 1 and 1000: \n");
    for (int i = 0; i <= 1000; i++) {
        if (prime(i)) {
            printf("%d\t", i);
        }
    }
}

int prime(int x) {
    if (x == 0 || x == 1) return 0;

    for (int i = 2; i <= x / 2; i++) {
        if (x % i == 0) {
            return 0;
        }
    }

    return 1;
}
