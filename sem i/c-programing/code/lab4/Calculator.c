#include <stdio.h>

int main() {
    float num1, num2;
    char op;
    printf("Enter two numbers and an operator (+, -, *, /): ");
    scanf("%f %c %f", &num1, &op, &num2);

    switch (op) {
        case '+': printf("Result: %.2f\n", num1 + num2); break;
        case '-': printf("Result: %.2f\n", num1 - num2); break;
        case '*': printf("Result: %.2f\n", num1 * num2); break;
        case '/': 
            if (num2 != 0)
                printf("Result: %.2f\n", num1 / num2);
            else
                printf("Error: Division by zero!\n");
            break;
        default: printf("Invalid operator\n");
    }

    return 0;
}
