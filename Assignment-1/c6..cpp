#include <stdio.h>

int main() {
    int amount, notes;

    printf("Enter the amount: ");
    scanf("%d", &amount);

    printf("Total number of notes:\n");

    notes = amount / 500;
    printf("500: %d\n", notes);
    amount -= notes * 500;

    notes = amount / 100;
    printf("100: %d\n", notes);
    amount -= notes * 100;

    notes = amount / 50;
    printf("50: %d\n", notes);
    amount -= notes * 50;

    notes = amount / 20;
    printf("20: %d\n", notes);
    amount -= notes * 20;

    notes = amount / 10;
    printf("10: %d\n", notes);
    amount -= notes * 10;

    notes = amount / 5;
    printf("5: %d\n", notes);
    amount -= notes * 5;

    notes = amount / 2;
    printf("2: %d\n", notes);
    amount -= notes * 2;

    notes = amount / 1;
    printf("1: %d\n", notes);
    amount -= notes * 1;

    return 0;
}
