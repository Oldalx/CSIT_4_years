#include<stdio.h>
int main(){
    int a[3][3] = {{1,2,4},{4,5,6},{3,4,5}};
    int b[3][3] = {{1,2,4},{4,5,6},{4,5,6}};

    int i,j;
    int sum[3][3];
    for (int i=0; i<3; i++){
        for (j=0; j<3;j++){
            sum[i][j]= a[i][j]+b[i][j];

        }
    }
    for (int i=0; i<3; i++){
        for (j=0; j<3;j++){
 printf("%d \t",sum[i][j]);
    
}
printf("\n");
    }
    }