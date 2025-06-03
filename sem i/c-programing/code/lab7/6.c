#include <stdio.h>

union Number {
    int integer;
    float real;
};

int main() {
    union Number num;

    num.integer = 10;
    printf("Integer value: %d\n", num.integer);

    num.real = 5.5;
    printf("Real value: %.2f\n", num.real);

    // Note: union shares memory, so integer value will be overwritten
    printf("Integer value after assigning real: %d\n", num.integer);

    return 0;
}
