#include <stdio.h>

int modInverse(int a, int m){
    a = a%m;
    for(int x=1;x<m;x++){
        if((a*x)%m==1) return x;
    }
    return 0;
}

int main() {
    int n, i;
    printf("Enter number of congruences: ");
    scanf("%d", &n);
    
    int a[n], m[n];
    int M=1;
    
    for(i=0;i<n;i++){
        printf("Enter remainder a[%d] and modulus m[%d]: ", i, i);
        scanf("%d %d", &a[i], &m[i]);
        M *= m[i];
    }
    
    int x=0;
    for(i=0;i<n;i++){
        int Mi = M/m[i];
        int inv = modInverse(Mi, m[i]);
        x += a[i]*Mi*inv;
    }
    
    x = x%M;
    printf("Solution x = %d\n", x);
    return 0;
}
