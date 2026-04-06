#include<stdio.h>

struct employee
{
    char name[20];
    float salary;
};

int main()
{
    struct employee e[100];
    int n, i, max;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Input
    for(i = 0; i < n; i++)
    {
        printf("Enter name and salary: ");
        scanf("%s %f", e[i].name, &e[i].salary);
    }

    // Assume first employee has highest salary
    max = 0;

    // Compare salaries
    for(i = 1; i < n; i++)
    {
        if(e[i].salary > e[max].salary)
        {
            max = i;
        }
    }

    // Output
    printf("\nEmployee with highest salary:\n");
    printf("Name: %s\n", e[max].name);
    printf("Salary: %.2f\n", e[max].salary);

    return 0;
}
