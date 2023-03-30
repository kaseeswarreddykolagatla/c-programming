#include <stdio.h>

int gcd(int num1, int num2);

int main()
{
    int num1, num2, lcm;
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    lcm = (num1 * num2) / gcd(num1, num2);

    printf("LCM of %d and %d is %d\n", num1, num2, lcm);
    return 0;
}

int gcd(int num1, int num2)
{
    if(num2 == 0)
        return num1;
    else
        return gcd(num2, num1 % num2);
        printf("registration number:192211188");
}