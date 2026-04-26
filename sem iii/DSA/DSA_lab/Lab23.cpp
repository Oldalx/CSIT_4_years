#include <stdio.h>

// Display Array
void display(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Merge Function
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Create temp arrays
    int L[n1], R[n2];

    // Copy data to temp arrays
    for (int i = 0; i < n1; i++) L[i] = arr[left + i];
    for (int j = 0; j < n2; j++) R[j] = arr[mid + 1 + j];

    // Merge temp arrays back
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }

    // Copy remaining elements
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];

    // Show merge step
    printf("Merged [%d..%d]: ", left, right);
    for (int x = left; x <= right; x++)
        printf("%d ", arr[x]);
    printf("\n");
}

// Merge Sort Function
void mergeSort(int arr[], int left, int right, int n) {
    if (left < right) {
        int mid = (left + right) / 2;

        printf("Dividing -> Left[%d..%d]  Right[%d..%d]\n",
                left, mid, mid + 1, right);

        // Sort left and right halves
        mergeSort(arr, left, mid, n);
        mergeSort(arr, mid + 1, right, n);

        // Merge sorted halves
        merge(arr, left, mid, right);
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

    printf("\n--- Merge Sort Steps ---\n");
    mergeSort(arr, 0, n - 1, n);

    printf("\nAfter Sorting:  ");
    display(arr, n);

    return 0;
}
