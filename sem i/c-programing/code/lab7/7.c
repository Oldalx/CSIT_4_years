#include <stdio.h>

struct Employee {
    int emp_id;
    char name[50];
    float salary;
};

void changeSalary(struct Employee *e) {
    e->salary = e->salary * 1.10; // Increase salary by 10%
}

int main() {
    struct Employee emp1 = {1, "Kisu", 40000};

    printf("Before Salary Increase: %.2f\n", emp1.salary);

    changeSalary(&emp1);

    printf("After Salary Increase: %.2f\n", emp1.salary);

    return 0;
}
