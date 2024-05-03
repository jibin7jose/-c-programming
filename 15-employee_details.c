//Read and print employee details of n employees

#include<stdio.h>

struct Employee
{
        char name[30];
        char emp_id[30];
        float salary;
};

void main()
{
        int n, i;
        printf("Enter the number of employees\n");
        scanf("%i",&n);
        struct Employee e[n];
        printf("\nEnter the name, employee id, salary\n");
        for(i=0; i<n; i++)
                scanf("%s %s %f", e[i].name, e[i].emp_id, &e[i].salary);
        printf("\nEmployee details\n");
        for(i=0; i<n; i++)
                printf("%s\t%s\t%.2f\n", e[i].name, e[i].emp_id, e[i].salary);
}
