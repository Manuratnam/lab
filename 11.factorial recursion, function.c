//recursion 
#include<stdio.h>

int factorial(int n)
{
    if(n == 0 || n == 1)
        return 1;   // base case

    return n * factorial(n - 1);
}

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("Factorial = %d", factorial(n));

    return 0;
}





//function
#include<stdio.h>

int factorial(int n)
{
    int i, fact = 1;

    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("Factorial = %d", factorial(n));

    return 0;
}
