#include<stdio.h>
void main(){
    int num;
    printf("Enter the number to check : ");
    scanf("%d",&num);
    if (num % 5 == 0 && num% 3==0 && num % 10 !=0 ){
         printf("The number is divisible by 5 and 3 but not by 10.\n");
    }
    else {
        printf("The number does not meet the condition.\n");
    }
}