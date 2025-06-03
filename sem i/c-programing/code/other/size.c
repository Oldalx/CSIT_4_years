#include <stdio.h>

void main() {
    // Declare variables of different types
    int int_number = 7;
    float float_number = 9.99;
    char character = 'h';
    double double_num = 99999;
    long long_num = 9999999;

    // Print the sizes of the variables
    printf("The size of the variables used in C are as follows:\n");
    printf("Size of Integer = %zu bytes\n", sizeof(int_number));
    printf("Size of Float = %zu bytes\n", sizeof(float_number));
    printf("Size of Character = %zu bytes\n", sizeof(character));
    printf("Size of Double = %zu bytes\n", sizeof(double_num));
    printf("Size of Long = %zu bytes\n", sizeof(long_num));
}
