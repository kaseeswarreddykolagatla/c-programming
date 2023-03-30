#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num);

int main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    bool flag = false;
    for(int i=2; i<=num/2; i++)
    {
        if(isPrime(i))
        {
            if(isPrime(num-i))
            {
                printf("%d can be expressed as the sum of %d and %d\n", num, i, num-i);
                flag = true;
            }
        }
    }
    if(!flag)
        printf("%d cannot be expressed as the sum of two prime numbers\n", num);

    return 0;
}

bool isPrime(int num)
{
    if(num < 2)
        return false;
    for(int i=2; i<=num/2; i++)
    {
        if(num % i == 0)
            return false;
    }
    return true;
    printf("registration number:192211188");
}