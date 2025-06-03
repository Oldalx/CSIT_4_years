#include <stdio.h>

void displayFile(char filename[]) {
    FILE *fptr = fopen(filename, "r");
    char ch;
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return;
    }
    while ((ch = fgetc(fptr)) != EOF) {
        putchar(ch);
    }
    fclose(fptr);
}

int main() {
    char filename[] = "file1.txt";

    printf("Before appending:\n");
    displayFile(filename);

    FILE *fptr = fopen(filename, "a");
    if (fptr == NULL) {
        printf("Error opening file for appending!\n");
        return 1;
    }

    fprintf(fptr, "Appending new text!\n");
    fclose(fptr);

    printf("\nAfter appending:\n");
    displayFile(filename);

    return 0;
}
