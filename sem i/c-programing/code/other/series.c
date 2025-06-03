#include<stdio.h>
int main(){
    int n;
    int num=0;
    printf("Enter the nth term: ");
    scanf("%d",&n);
    while(n){
        num= n*n*n;
        printf("%d",num);
        num++;
        break;

        

    }
}