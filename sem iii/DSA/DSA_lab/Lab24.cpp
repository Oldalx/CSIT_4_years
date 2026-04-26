#include <stdio.h>

void display(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Heapify function
void heapify(int arr[], int n, int i) {
    int largest = i;
    int left    = 2 * i + 1;
    int right   = 2 * i + 2;

    if (left  < n && arr[left]  > arr[largest]) largest = left;
    if (right < n && arr[right] > arr[largest]) largest = right;

    if (largest != i) {
        int temp    = arr[i];
        arr[i]      = arr[largest];
        arr[largest]= temp;
        heapify(arr, n, largest);
    }
}

// Heap Sort
void heapSort(int arr[], int n) {
    // Build Max Heap
    printf("--- Building Max Heap ---\n");
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
    printf("Max Heap: "); display(arr, n);

    // Extract elements from heap
    printf("--- Sorting ---\n");
    for (int i = n - 1; i > 0; i--) {
        // Swap root with last
        int temp = arr[0];
        arr[0]   = arr[i];
        arr[i]   = temp;
        heapify(arr, 1, 0);
        printf("Step %d:   ", n - i);
        display(arr, n);
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
    heapSort(arr, n);
    printf("After:  "); display(arr, n);

    return 0;
}
