#include<stdio.h>


int sum(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);

int main(){
    int a,b;
    int p,q,r,s;
    int f_num, s_num;
    printf("Enter the first number: ");
    scanf("%d",&f_num);
    printf("Enter the second number: ");
    scanf("%d",&s_num); 
    p=sum(a,b);
    q=div(a,b);
    r=mul(a,b);
    s=div(a,b);
    printf("sum is %d \n",p);
    printf("sub is %d \n",q);
    printf("mul is %d \n",r);
    printf("div is %d \n",s);
    return 0;

    
}

int sum(int a, int b){
    int sum;
    sum= a+b;
    return sum;

}
int sub(int a, int b){
    int sub;
    sub= a-b;
    return sub;

}
int mul(int a, int b){
    int mul;
    mul= a*b;
    return mul;

}
int div(int a, int b){
    int div;
    div= a+b;
    return div;

}