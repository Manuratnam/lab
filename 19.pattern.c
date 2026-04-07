#include<stdio.h>
void patt1(int n)
{
    int i,j;
    for (i=0;i<=n;i++)
    {
        for (j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void patt2(int n)
{
    int i,j,m=1;
    for (i=0;i<=i;i++)
    {
        for (j=0;j<=i;j++)
        {
            printf("%d",m);
            m++;
        }
        printf("\n");
    }
}


int main()
{
   int n;
   printf("enter no. of rows");
   scanf("%d",&n);
   printf("\n pattern 1\n");
   patt1(n);
   
   printf("\npattern 2\n");
   patt2(n);
return 0;
}
