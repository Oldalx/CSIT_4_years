#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    
    while (1) { // Infinite loop
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num < 0) {
            printf("Negative numbers are not allowed. Exiting...\n");
            exit(0); // Exit the program
        }

        printf("You entered: %d\n", num);
    }

    return 0;
}
