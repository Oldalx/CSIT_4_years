#include<stdio.h>
int main(){
    int arow,acolumn,brow,bcolumn;

   int const max= 20;
   int a[max][max];
   int b[max][max];
   int c[max][max];
   int i;
   int j;
    printf("Enter the number of row for first matrix: \n");
        scanf("%d",&arow);

    printf("Enter the number of column for first matrix:\n");
        scanf("%d",&acolumn);

    printf("Enter the number of row for second matrix:\n");
        scanf("%d",&brow);

    printf("Enter the number of column for second matrix:\n");
        scanf("%d",&bcolumn);

         printf("\n Enter the data in matrix a : ");

    for (i=0; i<arow; i++) {
        for(j=0;j<acolumn;j++){
    scanf("%d",&a[i][j]);
        }
    }
   printf("\n Enter the data in matrix b : ");

    for (i=0; i<brow; i++) {
        for(j=0;j<bcolumn;j++){
    scanf("%d",&b[i][j]);
        }
    }
    for (i = 0; i < arow; i++) {
        for (j = 0; j < bcolumn; j++) {
            c[i][j] = 0;
        }
    }
      for (i=0; i<arow; i++) {
        for(j=0;j<bcolumn;j++){
            for(int k=0; k<acolumn; k++){
    c[i][j]+= a[i][k]*b[k][j];
    
    
            }
        }
        }
        printf("\nResultant matrix after multiplication:\n");
    for (i = 0; i < arow; i++) {
        for (j = 0; j < bcolumn; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;

}
