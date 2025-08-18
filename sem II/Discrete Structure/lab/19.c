#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int n;
    printf("Enter number of throws: ");
    scanf("%d",&n);
    
    srand(time(0));
    for(int i=0;i<n;i++){
        int dice = (rand()%6)+1;
        printf("Throw %d: %d\n", i+1, dice);
    }
    return 0;
}
