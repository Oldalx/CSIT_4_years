#include<stdio.h>
void main(){
    int arry[3][4];
    int j;
     for (int i=0 ; i<3; i++)
    {
          for (int j=0 ; j<=3; j++){
    printf("Enter for %d %d: ",i+1,j+1);
    scanf("%d",&arry[i][j]);
    }
    }
for (int i=0 ; i<3; i++)
    {
          for (int j=0 ; j<=3; j++){
        printf("%d",arry[i][j]);
          }
          printf("\n");
    }

}