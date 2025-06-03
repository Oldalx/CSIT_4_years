#include <stdio.h>

struct Employee {
    int emp_id;
    char name[50];
    float salary;
};

void displayEmployees(struct Employee emp[], int size) {
    for (int i = 0; i < size; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("ID: %d\n", emp[i].emp_id);
        printf("Name: %s\n", emp[i].name);
        printf("Salary: %.2f\n", emp[i].salary);
    }
}

int main() {
    struct Employee employees[5] = {
        {1, "Ram", 50000},
        {2, "Sita", 55000},
        {3, "Hari", 60000},
        {4, "Gita", 65000},
        {5, "Shyam", 70000}
    };

    displayEmployees(employees, 5);

    return 0;
}
