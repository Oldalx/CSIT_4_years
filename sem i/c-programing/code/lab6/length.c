#include <stdio.h>

int stringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char text[] = "Hello, World!";
    printf("Length of the string: %d\n", stringLength(text));
    return 0;
}
