#include <stdio.h>

int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main() {
    int numbers[] = {12, 45, 67, 23, 89, 34};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    printf("Maximum element: %d\n", findMax(numbers, size));
    return 0;
}
