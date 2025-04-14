#include <stdio.h>

int main() {
    int x, rev;
    rev = 0;

    printf("Enter a number: ");
    scanf("%d", &   x);

    while (x > 0) {
        rev += rev * 10 + x % 10;
        x /= 10;
    }

    printf("%d", rev);
}
