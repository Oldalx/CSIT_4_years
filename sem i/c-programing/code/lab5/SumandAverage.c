#include <stdio.h>

int main() {
    int n, sum = 0;
    float avg;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    avg = (float)sum / n;
    printf("Sum = %d, Average = %.2f\n", sum, avg);
    
    return 0;
}
