#include<stdio.h>
int main(){
    int t1=0 , t2=1;
    int next_term;
    int n;

    next_term =t1+t2;

    printf("how many terms do user want to print:");
    scanf("%d",&n);
    printf("the first two fabonix seire is %d %d ",t1,t2);

    for (int i=3 ; i<=n ; ++i){
         printf("%d, ",next_term);
        t1=t2;
        t2=next_term;
        next_term=t1+t2;
    }
    return 0;

}