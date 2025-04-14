#include <stdio.h>

int main() {
    char a;

    printf("Enter a letter: ");
    scanf("%c", &a);
    if (a <= 'z' && a >= 'a') {
        a -= 32;
    } else {
        a += 32;
    }

    printf("%c", a);
}
