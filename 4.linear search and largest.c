#include<stdio.h>

int main()
{
    int arr[100], n, i, key, max=0, count=0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    // Linear search
    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            count = 1;
            break;
        }
    }

    if(count == 1)
        printf("found\n");
    else
        printf("not found\n");

    // Largest element (fixed)
    max = 0;

    for(i = 1; i < n; i++)
    {
        if(arr[i] > arr[max])
            max = i;
    }

    printf("Largest element is %d", arr[max]);

    return 0;
}
