#include <stdio.h>

int main() {
    FILE *source = fopen("file1.txt", "r");
    FILE *target = fopen("file2.txt", "w");
    char ch;

    if (source == NULL || target == NULL) {
        printf("Error opening files!\n");
        return 1;
    }

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, target);
    }

    printf("File copied successfully!\n");

    fclose(source);
    fclose(target);
    return 0;
}
