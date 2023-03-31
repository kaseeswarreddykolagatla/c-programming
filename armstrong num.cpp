#include <stdio.h>
int isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += digit * digit * digit;
        num /= 10;
    }
    if (sum == originalNum) {
        return 1;
    } else {
        return 0;
    }
}
int isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    if (sum == num) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num)) {
        printf("%d is an Armstrong number\n", num);
    } else {
        printf("%d is not an Armstrong number\n", num);
    }

    if (isPerfect(num)) {
        printf("%d is a Perfect number\n", num);
    } else {
        printf("%d is not a Perfect number\n", num);
    }

    return 0;
}
