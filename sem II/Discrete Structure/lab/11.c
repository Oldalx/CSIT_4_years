#include <stdio.h>

int fibonacci(int n) {
    if(n==0) return 0;
    if(n==1) return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}

int factorial(int n) {
    if(n==0) return 1;
    return n*factorial(n-1);
}

int summation(int n) {
    if(n==0) return 0;
    return n+summation(n-1);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    printf("Fibonacci(%d) = %d\n", n, fibonacci(n));
    printf("%d! = %d\n", n, factorial(n));
    printf("Sum 1 to %d = %d\n", n, summation(n));
    return 0;
}
