#include <stdio.h>

int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    
    // Direct
    if(x*x >=0) printf("Direct proof: x^2 >=0 is true\n");
    
    // Contrapositive: if not(x^2>=0) => false
    if(!(x*x>=0)) printf("Contrapositive proof: This will never print\n");
    
    // Contradiction: assume x^2<0 -> leads to false
    if(x*x<0) printf("Contradiction proof: This will never print\n");
    
    return 0;
}
