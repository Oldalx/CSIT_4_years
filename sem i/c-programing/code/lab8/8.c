#include <stdio.h>

int main() {
    FILE *fptr = fopen("random.txt", "w+");
    int numbers[5] = {10, 20, 30, 40, 50};
    int sum = 0, num, count = 0;

    if (fptr == NULL) {
        printf("Error creating file!\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        fprintf(fptr, "%d\n", numbers[i]);
    }

    rewind(fptr);

    while (fscanf(fptr, "%d", &num) != EOF) {
        sum += num;
        count++;
    }

    printf("Average: %.2f\n", (float)sum / count);

    fclose(fptr);
    return 0;
}
