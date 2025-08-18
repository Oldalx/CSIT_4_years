#include <stdio.h>

int main() {
    int A[10][10], B[10][10], C[10][10];
    int r, c, i, j;
    
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    
    printf("Enter Matrix A:\n");
    for(i=0;i<r;i++) for(j=0;j<c;j++) scanf("%d",&A[i][j]);
    
    printf("Enter Matrix B:\n");
    for(i=0;i<r;i++) for(j=0;j<c;j++) scanf("%d",&B[i][j]);
    
    // Arithmetic addition
    printf("A+B:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++) printf("%d ", A[i][j]+B[i][j]);
        printf("\n");
    }
    
    // Boolean OR (assuming 0/1)
    printf("A OR B:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++) printf("%d ", A[i][j]||B[i][j]);
        printf("\n");
    }
    
    return 0;
}
