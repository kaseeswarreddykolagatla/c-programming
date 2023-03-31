#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 100

struct employee {
    int eno;
    char ename[50];
    float salary;
};

int main() {
    struct employee employees[MAX_EMPLOYEES];
    int n, i, max_index;
    float max_salary;

    printf("Enter the number of employees: ");
    scanf("%d", &n);


    for (i = 0; i < n; i++) {
        printf("Enter details of employee %d:\n", i+1);
        printf("Employee No.: ");
        scanf("%d", &employees[i].eno);
        printf("Employee Name: ");
        scanf("%s", employees[i].ename);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }


    max_salary = employees[0].salary;
    max_index = 0;
    for (i = 1; i < n; i++) {
        if (employees[i].salary > max_salary) {
            max_salary = employees[i].salary;
            max_index = i;
        }
    }

 
    printf("\nEmployee with highest salary:\n");
    printf("Employee No.: %d\n", employees[max_index].eno);
    printf("Employee Name: %s\n", employees[max_index].ename);
    printf("Salary: %.2f\n", employees[max_index].salary);

    return 0;
}

