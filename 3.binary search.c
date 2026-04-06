#include<stdio.h>
int main()
{
    int arr[10],i,high,low=0,n,key,mid,found=0;
    printf("enter no. of elements:");
    scanf("%d",&n);
    printf("enter elements in order:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter element to search:");
    scanf("%d",&key);
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==key)
          {
              found=1;
              break;
          }
        else if(arr[mid]<key)
          {
              low=mid+1;
          }
        else
          {
              high=mid-1;
          }
    }
    if(found==1)
        {
            printf("Element found!");
        }
        else
        {
            printf("Element not found");
        }
return 0;
} 
