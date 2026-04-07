//recursion
#include<stdio.h>

int fib(int n)
{
    if(n == 1)
        return 0;
    if(n == 2)
        return 1;

    return fib(n-1) + fib(n-2);
}

int main()
{
    int n, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series:\n");

    for(i = 1; i <= n; i++)
    {
        printf("%d ", fib(i));
    }

    return 0;
}





//function
#include<stdio.h>

void fib(int n)
{
    int i;
    int a = 0, b = 1, c;

    for(i = 1; i <= n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}

int main()
{
    int n;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series:\n");
    fib(n);

    return 0;
}
