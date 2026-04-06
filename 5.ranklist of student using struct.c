#include<stdio.h>

struct student
{
    char name[20];
    int mark;
};

int main()
{
    struct student s[200], temp;
    int i, j, n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter name and mark:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%s %d", s[i].name, &s[i].mark);
    }

    // Sorting (descending)
    for(i = 0; i < n-1; i++)
    {
        for(j = 0; j < n-i-1; j++)
        {
            if(s[j].mark < s[j+1].mark)
            {
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }

    // Printing rank list
    printf("\nRank List:\n");
    for(i = 0; i < n; i++)
    {
        printf("Rank %d = %d - %s\n", i+1, s[i].mark, s[i].name);
    }

    return 0;
}
