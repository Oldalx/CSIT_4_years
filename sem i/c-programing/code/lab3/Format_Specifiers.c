#include <stdio.h>

int main() {
    int num = 25;
    float fnum = 12.345;
    char ch = 'A';
    char str[] = "Hello, C!";

    printf("Integer in decimal: %d\n", num);
    printf("Integer in octal: %o\n", num);
    printf("Integer in hexadecimal: %x\n", num);

    printf("Floating-point (default): %f\n", fnum);
    printf("Floating-point (2 decimal places): %.2f\n", fnum);

    printf("Character: %c\n", ch);
    printf("String: %s\n", str);

    return 0;
}
