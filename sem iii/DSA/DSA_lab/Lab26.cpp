   #include <stdio.h>

// Display Array
void display(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Shell Sort Function
void shellSort(int arr[], int n) {
    // Start with large gap, reduce gap each pass
    for (int gap = n / 2; gap > 0; gap /= 2) {
        printf("\n--- Gap = %d ---\n", gap);

        // Insertion sort with current gap
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j = i;

            // Shift elements until correct position found
            while (j >= gap && arr[j - gap] > temp) {
                arr[j] = arr[j - gap];
                j -= gap;
            }
            arr[j] = temp;

            // Show each step
            printf("  i=%d, key=%d : ", i, temp);
            display(arr, n);
        }
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

    printf("\n--- Shell Sort Steps ---");
    shellSort(arr, n);

    printf("\nAfter Sorting:  ");
    display(arr, n);

    return 0;
}
