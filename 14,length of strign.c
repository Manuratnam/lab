#include<stdio.h>

int main()
{
    char str[100];
    int i = 0;

    printf("Enter string: ");
    fgets(str, 100, stdin);

    while(str[i] != '\0' && str[i] != '\n')
    {
        i++;
    }

    printf("Length of string is %d", i);

    return 0;
}
