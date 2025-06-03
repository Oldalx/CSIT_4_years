#include<stdio.h>
int main() {
    for (int i = 0; i < 5; i++) {         // Declare `i` in the loop scope
        for (int j = 0; j < i; j++) {     // Declare `j` in the loop scope
            printf("*");
        }
        printf("\n");                     // Line break after each row
    }
    return 0;
}
