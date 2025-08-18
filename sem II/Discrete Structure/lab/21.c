#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements in set: ");
    scanf("%d", &n);
    int rel[n][n];
    
    printf("Enter relation matrix (0 or 1):\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&rel[i][j]);
    
    printf("Relation Matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            printf("%d ", rel[i][j]);
        printf("\n");
    }
    return 0;
}
