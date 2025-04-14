#include <stdio.h>
#include <string.h>

int toParse(char* lst);


int main() {
    char* lst = "1234512";
    printf("%d", toParse(lst));
}

int toParse(char* lst) {
    int n = 0;
    int size = strlen(lst);
    int p = 1;


    for (int i = size - 1; i >= 0; i--) {
        n += (lst[i] - '0') * p;
        p *= 10;
    }

    return n;
}
