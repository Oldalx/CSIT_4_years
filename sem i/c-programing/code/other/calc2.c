#include <stdio.h>
void main(){
    int sum,div,mul,sub;
    int num1,num2;
    char option;
    int a,b;
             int sum=0;
             int sub=0;
             int div=0;
             int mul=0;

    printf("Enter any first number : ");
    scanf("%d",&num1);
    printf("Enter any second number : ");
    scanf("%d",&num2);
    printf("what do you want to do : \n");
    scanf(" %c",&option);

    switch(option)
    {
        case ('+'):
        sum= a+b;
        printf("the sum is %d",sum);
        break;

        case ('-'):
         sub= a-b;
                 printf("the sub is %d \n",sub);
                 break;


         case ('*'):
         mul= a*b;
                 printf("the mul is %d \n",mul);
                 break;


        case ('/'):
         div= a/b;
                 printf("the div is %d \n",div);
                 break;


         defult:
         printf("error");
         




     
        }
    }

