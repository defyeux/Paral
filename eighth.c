#include <stdio.h>

int main() {
    int sum, y;
    int count = 0;

    for (int x = 1; x <= 1000000; x++) {
        sum = 0;
        y = x;

        while (y != 0) {
            sum += y % 10;
            y /= 10;
        }

        if (sum == 25) {
            printf("%d ", x); count++;
        }

        if (count == 10) {
            printf("\n");
            count = 0;
        }
    }
}
