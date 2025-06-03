#include <stdio.h>

int main() {
    FILE *fptr = fopen("file1.txt", "r");
    char line[256];

    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while (fgets(line, sizeof(line), fptr)) {
        printf("%s", line);
    }

    fclose(fptr);
    return 0;
}
