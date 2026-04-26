#include <stdio.h>

long fact(int n) {
    if (n == 0) return 1;
    return n * fact(n - 1);
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Factorial = %ld\n", fact(n));
}
