#include <stdio.h>

int main(){
    int n;
    printf("Enter size of relation matrix: ");
    scanf("%d",&n);
    int R[n][n];
    printf("Enter relation matrix (0/1):\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&R[i][j]);
    
    int reflexive=1, symmetric=1, transitive=1, antisymmetric=1;
    
    for(int i=0;i<n;i++){
        if(R[i][i]!=1) reflexive=0;
        for(int j=0;j<n;j++){
            if(R[i][j]!=R[j][i]) symmetric=0;
            if(i!=j && R[i][j]==1 && R[j][i]==1) antisymmetric=0;
            for(int k=0;k<n;k++){
                if(R[i][j]==1 && R[j][k]==1 && R[i][k]!=1) transitive=0;
            }
        }
    }
    
    printf("Reflexive: %s\n", reflexive?"Yes":"No");
    printf("Symmetric: %s\n", symmetric?"Yes":"No");
    printf("Transitive: %s\n", transitive?"Yes":"No");
    printf("Anti-symmetric: %s\n", antisymmetric?"Yes":"No");
    
    return 0;
}
