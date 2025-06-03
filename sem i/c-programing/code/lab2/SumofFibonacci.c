#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next, sum = 0;
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            sum += first;
        next = first + second;
        first = second;
        second = next;
    }
    
    printf("Sum of Fibonacci numbers at even indexes: %d\n", sum);
    return 0;
}
