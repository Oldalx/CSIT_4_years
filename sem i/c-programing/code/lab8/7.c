#include <stdio.h>

int main() {
    FILE *fin = fopen("integer.txt", "r");
    FILE *fout = fopen("square.txt", "w");
    int num;

    if (fin == NULL || fout == NULL) {
        printf("Error opening files!\n");
        return 1;
    }

    fscanf(fin, "%d", &num);
    fprintf(fout, "Square: %d\n", num * num);

    printf("Square written to file.\n");

    fclose(fin);
    fclose(fout);
    return 0;
}
