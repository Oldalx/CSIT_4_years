#include <stdio.h>
#include <math.h>

int main() {
    int n;
    float a, d, r;
    
    // Arithmetic Sequence
    printf("Arithmetic Sequence\n");
    printf("Enter first term and common difference: ");
    scanf("%f %f", &a, &d);
    printf("Enter n: ");
    scanf("%d", &n);
    
    float nth = a + (n-1)*d;
    float sum = (n/2.0)*(2*a + (n-1)*d);
    printf("Nth term = %.2f, Sum = %.2f\n", nth, sum);
    
    // Geometric Sequence
    printf("Geometric Sequence\n");
    printf("Enter first term and common ratio: ");
    scanf("%f %f", &a, &r);
    printf("Enter n: ");
    scanf("%d", &n);
    
    nth = a * pow(r, n-1);
    if(r==1) sum = n*a;
    else sum = a*(pow(r,n)-1)/(r-1);
    printf("Nth term = %.2f, Sum = %.2f\n", nth, sum);
    
    return 0;
}
