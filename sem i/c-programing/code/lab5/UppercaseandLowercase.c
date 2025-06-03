#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Uppercase: ");
    for (int i = 0; str[i] != '\0'; i++)
        printf("%c", toupper(str[i]));

    printf("\nLowercase: ");
    for (int i = 0; str[i] != '\0'; i++)
        printf("%c", tolower(str[i]));

    printf("\n");

    return 0;
}
