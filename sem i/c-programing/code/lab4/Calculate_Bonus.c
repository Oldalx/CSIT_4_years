#include <stdio.h>

int main() {
    float salary, bonus;
    printf("Enter salary: ");
    scanf("%f", &salary);

    if (salary < 10000)
        bonus = salary * 0.10;
    else if (salary < 20000)
        bonus = salary * 0.08;
    else
        bonus = salary * 0.05;

    printf("Bonus: %.2f\n", bonus);
    return 0;
}
