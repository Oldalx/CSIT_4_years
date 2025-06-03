#include <stdio.h>

int main() {
    FILE *fptr = fopen("file1.txt", "r");
    char ch;

    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while ((ch = fgetc(fptr)) != EOF) {
        putchar(ch);
    }

    fclose(fptr);
    return 0;
}
