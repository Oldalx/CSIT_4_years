#include <stdio.h>

int main() {
    int start, end, i, j, is_prime;
    printf("Enter start and end range: ");
    scanf("%d %d", &start, &end);

    for (i = start; i <= end; i++) {
        if (i < 2) continue;
        is_prime = 1;
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime) {
            printf("First prime: %d\n", i);
            break;
        }
    }

    return 0;
}
