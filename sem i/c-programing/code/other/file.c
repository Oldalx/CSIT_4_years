#include <stdio.h>

int main() {
    FILE *fp;
    char test[50];  // Changed from int to char for string input

    fp = fopen("new.txt", "r");
    if (fp == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    fscanf(fp, "%s", test);  // Read string from file
    fclose(fp);

    printf("Read from file: %s\n", test);

    return 0;
}
