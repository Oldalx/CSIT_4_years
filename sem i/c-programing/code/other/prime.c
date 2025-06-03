#include <stdio.h>
void main(){
   int isprime;
   int num;
   int n;
   printf("upto how many num you want to print: ");
   scanf("%d",&n);
   for (num=2 ;num<=n; num++){
    isprime = 1;
    for (int i =2 ; i<num/2; i++){
        if (num%i==0){
            isprime =0;
            break;
        }
    }
    if(isprime){
       printf("%d \n",num);
   }
   }
   
    
}