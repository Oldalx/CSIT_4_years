//lab3
#include <stdio.h>

int main() {
    int A[10], B[10], sizeA, sizeB;

    // Input set A
    printf("Enter size of set A: ");
    scanf("%d", &sizeA);
    printf("Enter elements of set A: ");
    for (int i = 0; i < sizeA; i++) scanf("%d", &A[i]);

    // Input set B
    printf("Enter size of set B: ");
    scanf("%d", &sizeB);
    printf("Enter elements of set B: ");
    for (int i = 0; i < sizeB; i++) scanf("%d", &B[i]);

    // Compute and print Cartesian Product
    printf("A x B = { ");
    for (int i = 0; i < sizeA; i++) {
        for (int j = 0; j < sizeB; j++) {
            printf("(%d, %d)", A[i], B[j]);
            if (i != sizeA - 1 || j != sizeB - 1) printf(", ");
        }
    }
    printf(" }\n");

    return 0;
}