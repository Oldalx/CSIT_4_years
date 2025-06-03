#include <stdio.h>

struct Employee {
    int emp_id;
    char name[50];
    float salary;
};

int main() {
    struct Employee employees[5] = {
        {1, "Ram", 50000},
        {2, "Sita", 55000},
        {3, "Hari", 60000},
        {4, "Gita", 65000},
        {5, "Shyam", 70000}
    };

    for (int i = 0; i < 5; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("ID: %d\n", employees[i].emp_id);
        printf("Name: %s\n", employees[i].name);
        printf("Salary: %.2f\n", employees[i].salary);
    }

    return 0;
}
