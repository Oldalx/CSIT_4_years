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
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("%d ", combination(i,j));
        }
        printf("\n");
    }
    return 0;
}
