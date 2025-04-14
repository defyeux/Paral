#include <stdio.h>
#include <math.h>

int main() {
    int p;
    int sum;
    int n;

    for (int x = 1; x <= 100000; x++) {
        n = x;
        p = (int)log10(n) + 1;
        sum = 0;

        while (n != 0) {
            sum += pow(n % 10, p);
            n /= 10;
        }

        if (sum == x) {
            printf("%d \t", x);
        }
    }
}
