#include<stdio.h>

int isPrime(int n)
{
    int i;

    if(n <= 1)
        return 0;

    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
            return 0;
    }

    return 1;
}

int isEven(int n)
{
    if(n % 2 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    // Prime check
    if(isPrime(n) == 1)
        printf("Prime\n");
    else
        printf("Not prime\n");

    // Even/Odd check
    if(isEven(n) == 1)
        printf("Even\n");
    else
        printf("Odd\n");

    return 0;
}
