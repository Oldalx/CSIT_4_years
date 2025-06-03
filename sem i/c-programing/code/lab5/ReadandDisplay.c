#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);  // Read input (not recommended for safety reasons)
    
    printf("You entered: ");
    puts(str);  // Display output

    return 0;
}
