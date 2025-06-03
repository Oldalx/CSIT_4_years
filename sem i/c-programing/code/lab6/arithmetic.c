#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    if (b != 0)
        return (float)a / b;
    else {
        printf("Division by zero error!\n");
        return 0;
    }
}

void arithmeticOperations(int x, int y) {
    printf("Addition: %d\n", add(x, y));
    printf("Subtraction: %d\n", subtract(x, y));
    printf("Multiplication: %d\n", multiply(x, y));
    printf("Division: %.2f\n", divide(x, y));
}

int main() {
    int num1 = 12, num2 = 4;
    arithmeticOperations(num1, num2);
    return 0;
}
