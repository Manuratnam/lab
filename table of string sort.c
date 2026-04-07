#include<stdio.h>
#include<string.h>

int main()
{
    char arr[100][20], temp[20];
    int n, i, j;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    printf("Enter strings:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%s", arr[i]);
    }

    // Sorting
    for(i = 0; i < n-1; i++)
    {
        for(j = 0; j < n-i-1; j++)
        {
            if(strcmp(arr[j], arr[j+1]) > 0)
            {
                // swap strings
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j+1]);
                strcpy(arr[j+1], temp);
            }
        }
    }

    printf("\nSorted strings:\n");
    for(i = 0; i < n; i++)
    {
        printf("%s\n", arr[i]);
    }

    return 0;
}