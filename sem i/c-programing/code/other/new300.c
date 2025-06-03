#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "a"); // Open file in append mode
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(file, "Appending new line.\n"); // Append text
    fclose(file);

    printf("Data appended successfully.\n");
    return 0;
}
