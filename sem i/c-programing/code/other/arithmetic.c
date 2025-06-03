#include<stdio.h>
void main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);

    if (b != 0) {  // Avoid division by zero
        printf("Division: %.2f\n", (float)a / b);
    } else {
        printf("Division: Not possible (division by zero).\n");
    }
}
