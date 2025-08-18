#include <stdio.h>
#include <math.h>

int main() {
    int set[10], n, i, j;
    printf("Enter number of elements in set: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i = 0; i < n; i++) scanf("%d", &set[i]);
    
    int powerSetSize = (int)pow(2, n); // fixed: use pow instead of powerof
    
    printf("Power set:\n");
    for(i = 0; i < powerSetSize; i++){
        printf("{ ");
        for(j = 0; j < n; j++){
            if(i & (1 << j)) printf("%d ", set[j]);
        }
        printf("}\n");
    }
    return 0;
}
