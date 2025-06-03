#include<stdio.h>
int main(){
    int rem,rev=0;
    int num;

    printf("Enter the number :");
    scanf("%d",&num);

    while (num!=0)
    {
        rem =num%10;
        rev = rev * 10 + rem;

        num/=10;
    }

    printf("The reverse is %d \n",rev);
    
}