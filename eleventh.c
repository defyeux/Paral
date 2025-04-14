#include <stdio.h>

int prime(int x);

int duplicate(int x);

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (prime(n)) printf("%d is prime\n", n);
    else printf("%d is composite\n", n);

    if (duplicate(n)) printf("%d is duplicate", n);
    else printf("%d is not duplicate", n);
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

int duplicate(int x) {
    int y = x;
    int z, count;

    while (y != 0) {
        z = y;
        count = 0;

        while (z != 0) {
            if (z % 10 == y % 10) count++;
            if (count >= 2) return 1;
            z /= 10;
        }

        y /= 10;
    }
}
