#include <stdio.h>

int main() {
    int nA, nB, nAB;
    printf("Enter number of elements in Set A: ");
    scanf("%d", &nA);
    printf("Enter number of elements in Set B: ");
    scanf("%d", &nB);
    printf("Enter number of elements in both A and B (intersection): ");
    scanf("%d", &nAB);
    
    int unionAB = nA + nB - nAB;
    printf("Number of elements in A U B = %d\n", unionAB);
    return 0;
}
