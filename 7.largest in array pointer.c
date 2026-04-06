#include<stdio.h>

int main()
{
    int arr[100], n, i, max;
    int *p;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    p = arr;   // pointer points to first element

    max = *p;  // first element

    for(i = 1; i < n; i++)
    {
        if(*(p + i) > max)
        {
            max = *(p + i);
        }
    }

    printf("Largest element = %d", max);

    return 0;
}
