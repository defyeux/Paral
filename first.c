#include <stdio.h>

int main() {
    int y, m, d;
    printf("Enter year, month, day: ");
    scanf("%d %d %d", &y, &m, &d);
    int n = 0;

    switch (m) {
    case 12:
        n += 30;
    case 11:
        n += 31;
    case 10:
        n += 30;
    case 9:
        n += 31;
    case 8:
        n += 31;
    case 7:
        n += 30;
    case 6:
        n += 31;
    case 5:
        n += 30;
    case 4:
        n += 31;
    case 3:
        if (y % 4 == 0) {
            n += 29;
        } else {
            n += 28;
        }
    case 2:
        n += 31;
    }


    printf("Number of the day: %d", n + d);
}
