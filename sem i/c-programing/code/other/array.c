#include <stdio.h>
void main(){
    int arry[3];
    int num;
    for (int i=0 ; i<3; i++)
    {
    printf("Enter for %d : ",i+1);
    scanf("%d",&arry[i]);
    }
    for (int i=0 ; i<3; i++)
    {
        printf("%d \t",arry[i]);
    }

}
