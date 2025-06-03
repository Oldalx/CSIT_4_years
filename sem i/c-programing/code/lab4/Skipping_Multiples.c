#include <stdio.h>

int main() {
    printf("Numbers from 1 to 20 (skipping multiples of 5): ");
    for (int i = 1; i <= 20; i++) {
        if (i % 5 == 0) continue;
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
