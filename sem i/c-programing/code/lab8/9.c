#include <stdio.h>

int main() {
    FILE *source = fopen("file1.txt", "r");
    FILE *destination = fopen("file3.txt", "w");
    char ch;

    if (source == NULL || destination == NULL) {
        printf("Error opening files!\n");
        return 1;
    }

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    printf("Contents copied while reading and writing simultaneously!\n");

    fclose(source);
    fclose(destination);
    return 0;
}
