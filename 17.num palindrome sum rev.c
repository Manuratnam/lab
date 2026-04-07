#include<stdio.h>

int main()
{
    int n, temp, rev = 0, rem, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;   // store original

    while(n != 0)
    {
        rem = n % 10;        // get last digit
        rev = rev * 10 + rem; // build reverse
        sum = sum + rem;      // add digits
        n = n / 10;           // remove last digit
    }

    printf("Reversed number = %d\n", rev);
    printf("Sum of digits = %d\n", sum);

    if(temp == rev)
        printf("Palindrome");
    else
        printf("Not a palindrome");

    return 0;
}
