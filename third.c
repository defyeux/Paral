#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        for (int j = 0; j < i; j++) {
            printf("A");
        }

        for (int j = 0; j < 2 * (5 - i); j++) {
            printf(" ");
        }

        for (int j = 0; j < i; j++) {
            printf("B");
        }

        printf("\n");
    }

    return 0;
}
