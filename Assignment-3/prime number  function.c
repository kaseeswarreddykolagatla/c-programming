#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num);

int main()
{
    int start, end;
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);
    printf("Prime numbers between %d and %d are: ", start, end);
    for(int i=start; i<=end; i++)
    {
        if(isPrime(i))
            printf("%d ", i);
    }
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