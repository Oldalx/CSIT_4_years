#include <stdio.h>

int main() {
    int a = 0, b = 1, c;
    printf("First 10 Fibonacci numbers: ");

    for (int i = 1; i <= 10; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    
    printf("\n");
    return 0;
}
