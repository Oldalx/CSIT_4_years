#include<stdio.h>
int main(){
    int i,j,temp,num;

    printf("Enter the total element in array: ");
    scanf("%d",&num);
    int a[num];
    for (i=0; i<num ;i++){
    printf("Enter the elements for array : ");
    scanf("%d",&a[i]);
    }

    for (i=0; i<num-1; i++){
        for (j=0; j<num-i-1; j++){
            if (a[j]>a[j+1]){
                temp = a[j];
                a[j]= a[j+1];
                a[j+1]= temp;
            }
        }
       
    }
    for (i=0; i<num ;i++){
        printf("%d : ",a[i]);
    }





return 0;
}