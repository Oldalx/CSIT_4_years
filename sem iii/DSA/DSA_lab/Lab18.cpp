#include <stdio.h>

// Iterative Binary Search
int binarySearchIterative(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

// Recursive Binary Search
int binarySearchRecursive(int arr[], int low, int high, int key) {
    if (low > high) return -1;
    int mid = (low + high) / 2;
    if (arr[mid] == key)
        return mid;
    else if (arr[mid] < key)
        return binarySearchRecursive(arr, mid + 1, high, key);
    else
        return binarySearchRecursive(arr, low, mid - 1, key);
}

// Bubble Sort (to sort array before search)
void sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
}

// Display Array
void display(int arr[], int n) {
    printf("Array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int n, key, result;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Sort array first
    sort(arr, n);
    display(arr, n);

    printf("Enter element to search: ");
    scanf("%d", &key);

    int choice;
    printf("\n1. Iterative Binary Search\n");
    printf("2. Recursive Binary Search\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if (choice == 1)
        result = binarySearchIterative(arr, n, key);
    else
        result = binarySearchRecursive(arr, 0, n - 1, key);

    if (result != -1)
        printf("Element %d found at index %d (position %d).\n", key, result, result + 1);
    else
        printf("Element %d not found in array.\n", key);

    return 0;
}
