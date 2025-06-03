#include <stdio.h>

int main() {
    int n, isUpper = 1;

    printf("Enter the size of square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    for (int i = 1; i < n; i++)
        for (int j = 0; j < i; j++)
            if (matrix[i][j] != 0)
                isUpper = 0;

    if (isUpper)
        printf("The matrix is upper triangular.\n");
    else
        printf("The matrix is not upper triangular.\n");

    return 0;
}
