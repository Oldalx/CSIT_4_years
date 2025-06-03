#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50];

    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    printf("Length of first string: %lu\n", strlen(str1));

    strcpy(str2, str1);
    printf("After strcpy, second string: %s\n", str2);

    strcat(str1, str2);
    printf("After strcat, first string: %s\n", str1);

    int cmp = strcmp(str1, str2);
    if (cmp == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    return 0;
}
