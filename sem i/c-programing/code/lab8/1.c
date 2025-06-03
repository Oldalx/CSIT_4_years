#include <stdio.h>

int main() {
    FILE *fptr = fopen("file1.txt", "w");

    if (fptr == NULL) {
        printf("Error creating file!\n");
        return 1;
    }

    fprintf(fptr, "Hello, this is Lab VIII!\n");
    fclose(fptr);

    printf("File created and text written successfully!\n");
    return 0;
}
