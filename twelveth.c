#include <stdio.h>

int main() {
    int y, m, d;
    printf("Enter year, month, day: ");
    scanf("%d %d %d", &y, &m, &d);

    int lst[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0)) {
        lst[1] = 29;
    }
    int n = d;
    for (int i = 0; i < m - 1; i++) {
        n += lst[i];
    }

    printf("Number of the day: %d", n);
}
