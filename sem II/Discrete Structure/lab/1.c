#include <stdio.h>

int main() {
    int setA[100], setB[100], nA, nB, i, j, k;
    
    printf("Enter size of Set A: ");
    scanf("%d", &nA);
    printf("Enter elements of Set A: ");
    for(i=0;i<nA;i++) scanf("%d", &setA[i]);
    
    printf("Enter size of Set B: ");
    scanf("%d", &nB);
    printf("Enter elements of Set B: ");
    for(i=0;i<nB;i++) scanf("%d", &setB[i]);
    
    // Union
    printf("Union: ");
    for(i=0;i<nA;i++) printf("%d ", setA[i]);
    for(i=0;i<nB;i++){
        int flag=0;
        for(j=0;j<nA;j++) if(setB[i]==setA[j]) flag=1;
        if(!flag) printf("%d ", setB[i]);
    }
    printf("\n");
    
    // Intersection
    printf("Intersection: ");
    for(i=0;i<nA;i++){
        for(j=0;j<nB;j++){
            if(setA[i]==setB[j]) {printf("%d ", setA[i]); break;}
        }
    }
    printf("\n");
    
    // Difference A-B
    printf("Difference A-B: ");
    for(i=0;i<nA;i++){
        int flag=0;
        for(j=0;j<nB;j++) if(setA[i]==setB[j]) flag=1;
        if(!flag) printf("%d ", setA[i]);
    }
    printf("\n");
    
    // Complement of A (assuming universal set as 1..10)
    printf("Complement of A: ");
    for(i=1;i<=10;i++){
        int flag=0;
        for(j=0;j<nA;j++) if(i==setA[j]) flag=1;
        if(!flag) printf("%d ", i);
    }
    printf("\n");
    
    return 0;
}
