#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter the number for a:");
    scanf("%d",&a);
    printf("Enter the number for b:");
    scanf("%d",&b);

    temp= b;
    b=a;
    a=temp;

    printf("a= %d b= %d",a,b);

}