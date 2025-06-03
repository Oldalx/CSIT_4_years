#include<stdio.h>

int main() {
    int i, j;
    int matrix[2][3];

    // Input for the 2x3 matrix
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter the element for row %d, column %d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Output the 2x3 matrix in box format
    printf("\nThe matrix is:\n");
    for (i = 0; i < 2; i++) {
        printf("| "); // Start of a row
        for (j = 0; j < 3; j++) {
            printf("%2d ", matrix[i][j]); // Print each element with uniform spacing
        }
        printf("|\n"); // End of a row
    }

    return 0;
}
