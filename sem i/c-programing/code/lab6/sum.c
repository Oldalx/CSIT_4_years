#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 5, num2 = 7;
    int result = sum(num1, num2);
    printf("Sum: %d\n", result);
    return 0;
}
