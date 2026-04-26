#include <stdio.h>

// Display Array
void display(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Partition Function
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Last element as pivot
    int i = low - 1;       // Index of smaller element

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            // Swap arr[i] and arr[j]
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // Place pivot at correct position
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1; // Return pivot index
}

// Quick Sort Function
void quickSort(int arr[], int low, int high, int n) {
    if (low < high) {
        int pivotIdx = partition(arr, low, high);

        // Show current state after partition
        printf("Pivot=%d | Array: ", arr[pivotIdx]);
        display(arr, n);

        // Recursively sort left and right parts
        quickSort(arr, low, pivotIdx - 1, n);
        quickSort(arr, pivotIdx + 1, high, n);
    }
}

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\nBefore Sorting: ");
    display(arr, n);

    printf("\n--- Quick Sort Steps ---\n");
    quickSort(arr, 0, n - 1, n);

    printf("\nAfter Sorting:  ");
    display(arr, n);

    return 0;
}
