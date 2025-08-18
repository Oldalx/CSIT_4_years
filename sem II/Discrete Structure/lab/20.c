#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int n;
    printf("Enter number of flips: ");
    scanf("%d",&n);
    
    srand(time(0));
    for(int i=0;i<n;i++){
        int flip = rand()%2;
        printf("Flip %d: %s\n", i+1, flip ? "Heads":"Tails");
    }
    return 0;
}
