#include <stdio.h>

int isNeon(int num) {
    int square = num * num, sum = 0;
    
    while (square != 0) {
        sum += square % 10;
        square /= 10;
    }
    
    return sum == num;
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (isNeon(num))
        printf("%d is a Neon number.\n", num);
    else
        printf("%d is not a Neon number.\n", num);
    
    return 0;
}
