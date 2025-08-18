#include <stdio.h>

int factorial(int n){
    if(n==0) return 1;
    return n*factorial(n-1);
}

int main(){
    int n,r;
    printf("Enter n and r: ");
    scanf("%d %d", &n,&r);
    
    int nPr=factorial(n)/factorial(n-r);
    int nCr=factorial(n)/(factorial(r)*factorial(n-r));
    
    printf("Permutation P(%d,%d) = %d\n", n,r,nPr);
    printf("Combination C(%d,%d) = %d\n", n,r,nCr);
    return 0;
}
