#include<stdio.h>

int main() {
    int a[3][3] = {{1, 0, 0}, {1, 5, 0}, {3, 4, 5}};  // Example matrix
    int flag = 1;  // Assume it is a lower triangular matrix

    // Loop to check all elements above the main diagonal
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {  // Only check elements where j > i
            if (a[i][j] != 0) {  // Non-zero element found above diagonal
                flag = 0;
                break;
            }
        }
        if (!flag) break;  // Exit outer loop if not a lower triangular matrix
    }

    // Output the result
    if (flag) {
        printf("It is a lower triangular matrix.\n");
    } else {
        printf("It is not a lower triangular matrix.\n");
    }

    return 0;
}