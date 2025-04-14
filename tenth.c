#include <stdio.h>

int fibonacci(int x);

int main() {
    printf("Fibonacci numbers between 1 and 10000: \n");

    int n = fibonacci(1), i = 1;

    while (n <= 10000) {
        printf("%d\t", n);
        i++;
        n = fibonacci(i);

    }
}

int fibonacci(int x) {
    if (x == 0 || x == 1) return 1;

    return fibonacci(x - 2) + fibonacci(x - 1);
}
