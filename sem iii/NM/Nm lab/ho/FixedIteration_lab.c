#include <stdio.h>
#include <math.h>

// f(x) = 3x - cos(x) - 1
double f(double x) {
    return 3*x - cos(x) - 1;
}

// x = g(x)
double g(double x) {
    return (cos(x) + 1) / 3;
}

int main() {
    double x, x_new, error, eps;
    int itr, i = 0;

    printf("Program to find root using Fixed Point Iteration Method\n");
    printf("Enter the initial guess: ");
    scanf("%lf", &x);
    printf("Enter the error tolerance: ");
    scanf("%lf", &eps);
    printf("Enter the number of iterations: ");
    scanf("%d", &itr);

    while (i < itr) {
        x_new = g(x);
        error = fabs(x_new - x);

        printf("Iteration %d: x = %.5lf  error = %.5lf\n",
               i+1, x_new, error);

        if (error < eps)
            break;

        x = x_new;
        i++;
    }

    printf("\nThe root of the function is %.5lf\n", x_new);
    return 0;
}
