#include <stdio.h>

void display(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void bubbleSort(int arr[], int n) {
    int temp, swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        printf("Pass %d: ", i + 1);
        display(arr, n);
        if (swapped == 0) {
            printf("[Sorted Early at Pass %d]\n", i + 1);
            break;
        }
    }
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Before: "); display(arr, n);
    printf("--- Passes ---\n");
    bubbleSort(arr, n);
    printf("After:  "); display(arr, n);

    return 0;
}
