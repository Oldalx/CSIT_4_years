#include <stdio.h>

int main() {
    int n, isLower = 1;

    printf("Enter the size of square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (matrix[i][j] != 0)
                isLower = 0;

    if (isLower)
        printf("The matrix is lower triangular.\n");
    else
        printf("The matrix is not lower triangular.\n");

    return 0;
}
