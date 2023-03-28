#include <stdio.h>

int main() {
    char c;

    printf("Input character: ");
    scanf("%c", &c);

    if (c >= 'A' && c <= 'Z') {
        printf("'%c' is uppercase alphabet\n", c);
    } else if (c >= 'a' && c <= 'z') {
        printf("'%c' is lowercase alphabet\n", c);
    } else {
        printf("'%c' is not an alphabet\n", c);
    }

    return 0;
}
