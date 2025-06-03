#include<stdio.h>
void main() {
    int num;
    int rev = 0;
    int sum = 0;
    int mul = 1;

    printf("Enter the digit to be summed: ");
    scanf("%d", &num);

    printf("The digits are:\n");
    while (num != 0) {
        int digit = num % 10;  // Extract the last digit
        printf("%d\n", digit); // Print each digit
        rev = rev * 10 + digit; // Build the reversed number
        sum += digit;           // Add to the sum
        mul *= digit;           // Multiply to the product

        num /= 10;              // Remove the last digit
    }

    printf("rev = %d\n", rev);
    printf("sum = %d\n", sum);
    printf("mul = %d\n", mul);
}
