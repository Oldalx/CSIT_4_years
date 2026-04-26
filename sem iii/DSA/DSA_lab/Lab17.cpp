#include <stdio.h>

// Sequential Search Function
int sequentialSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i; // Return index if found
    }
    return -1; // Not found
}

int main() {
    int n, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    int result = sequentialSearch(arr, n, key);

    if (result != -1)
        printf("Element %d found at index %d (position %d).\n", key, result, result + 1);
    else
        printf("Element %d not found in array.\n", key);

    return 0;
}
