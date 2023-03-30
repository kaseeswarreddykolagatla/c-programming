#include <stdio.h>

int main() {
    char str[100];
    int sum = 0;

    printf("Enter a string: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++) {
        sum += (int) str[i];
    }

    printf("Sum of ASCII values of all characters in the string is %d\n", sum);

    printf("\nregistration number:192211188");
    return 0;
}