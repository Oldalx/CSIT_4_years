#include <stdio.h>

int main() {
    int A[10], B[10], nA, nB, i, j;
    printf("Enter size of Set A: ");
    scanf("%d", &nA);
    printf("Enter elements of Set A: ");
    for(i=0;i<nA;i++) scanf("%d", &A[i]);
    
    printf("Enter size of Set B: ");
    scanf("%d", &nB);
    printf("Enter elements of Set B: ");
    for(i=0;i<nB;i++) scanf("%d", &B[i]);
    
    printf("Cartesian Product A x B:\n");
    for(i=0;i<nA;i++){
        for(j=0;j<nB;j++){
            printf("(%d,%d) ", A[i], B[j]);
        }
    }
    printf("\n");
    return 0;
}
