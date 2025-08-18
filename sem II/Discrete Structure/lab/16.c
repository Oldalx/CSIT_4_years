#include <stdio.h>

int factorial(int n){
    if(n==0) return 1;
    return n*factorial(n-1);
}

int combination(int n,int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}

int main(){
    int n;
    printf("Enter value of n: ");
    scanf("%d",&n);
    printf("Binomial Expansion of (a+b)^%d:\n", n);
    for(int r=0;r<=n;r++){
        printf("%d*a^%d*b^%d ", combination(n,r), n-r, r);
        if(r<n) printf("+ ");
    }
    printf("\n");
    return 0;
}
