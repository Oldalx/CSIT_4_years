#include <stdio.h>
#include <string.h>

// Display Array
void display(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Find Maximum Element
int getMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}

// Counting Sort based on digit (exp)
void countingSort(int arr[], int n, int exp) {
    int output[n];
    int count[10] = {0};

    // Count occurrences of digits
    for (int i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;

    // Change count[i] to actual position
    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];

    // Build output array (traverse from right for stability)
    for (int i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    // Copy output to original array
    for (int i = 0; i < n; i++)
        arr[i] = output[i];
}

// Radix Sort Function
void radixSort(int arr[], int n) {
    int max = getMax(arr, n);
    int pass = 1;

    // Do counting sort for every digit
    for (int exp = 1; max / exp > 0; exp *= 10) {
        countingSort(arr, n, exp);

        // Show each pass
        if      (pass == 1) printf("Pass %d (Units place)    : ", pass);
        else if (pass == 2) printf("Pass %d (Tens place)     : ", pass);
        else if (pass == 3) printf("Pass %d (Hundreds place) : ", pass);
        else if (pass == 4) printf("Pass %d (Thousands place): ", pass);
        else                printf("Pass %d (place %d)       : ", pass, pass);

        display(arr, n);
        pass++;
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

    printf("\n--- Radix Sort Steps ---\n");
    radixSort(arr, n);

    printf("\nAfter Sorting:  ");
    display(arr, n);

    return 0;
}
