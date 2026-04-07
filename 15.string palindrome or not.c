#include<stdio.h>

int main()
{
    char str[100], rev[100];
    int i = 0, l = 0, flag = 1;

    printf("Enter string: ");
    fgets(str, 100, stdin);

    // find length (ignore '\n')
    while(str[l] != '\0' && str[l] != '\n')
    {
        l++;
    }

    // reverse string
    for(i = 0; i < l; i++)
    {
        rev[i] = str[l - 1 - i];
    }
    rev[l] = '\0';

    // compare
    for(i = 0; i < l; i++)
    {
        if(str[i] != rev[i])
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("Palindrome");
    else
        printf("Not a palindrome");

    return 0;
}
