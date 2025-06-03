#include <stdio.h>

int main() {
    int n;

    printf("Enter the number up to which you want to print primes: ");
    scanf("%d", &n);

    printf("Prime numbers up to %d are:\n", n);

    // Loop through numbers from 2 to n
    for (int num = 2; num <= n; num++) {
        int is_prime = 1; // Assume the current number is prime

        // Check if num is divisible by any number from 2 to sqrt(num)
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                is_prime = 0; // Found a divisor, so num is not prime
                break;
            }
        }

        // If num is prime, print it
        if (is_prime) {
            printf("%d ", num);
        }
    }

    printf("\n");
    return 0;
}
