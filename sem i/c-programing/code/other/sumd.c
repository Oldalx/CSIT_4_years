#include <stdio.h>
void main(){
    int sum=0,rem,num;
    printf("Enter the digit to do sum : ");
    scanf("%d",&num);

    while(num>0){
        rem = num%10;
        sum = sum+rem;
        num =num/10;
    }
    printf("The sum is %d",sum);

}