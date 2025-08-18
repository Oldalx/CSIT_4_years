#include <stdio.h>

int main(){
    int pigeons, holes;
    printf("Enter number of pigeons and holes: ");
    scanf("%d %d",&pigeons,&holes);
    
    int min_per_hole = pigeons/holes + (pigeons%holes!=0 ? 1 : 0);
    printf("At least one hole will contain at least %d pigeon(s)\n", min_per_hole);
    return 0;
}
