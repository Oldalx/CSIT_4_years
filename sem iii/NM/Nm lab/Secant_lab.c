#include <stdio.h>
#include <math.h>

// f(x) = 3x - cos(x) - 1
double f(double x) {
    return 3*x - cos(x) - 1;
}

int main() {
    double xprev, x, x_new, error, eps;
    int itr, i;

    printf("Program to find root using Secant Method\n");
    printf("Enter the initial guess: ");
    scanf("%lf", &xprev);
    printf("Enter the next initial guess: ");
    scanf("%lf", &x);
    printf("Enter the error tolerance: ");
    scanf("%lf", &eps);
    printf("Enter the number of iterations: ");
    scanf("%d", &itr);

    for (i = 0; i < itr; i++) {
        x_new = x - (f(x) * (x - xprev)) / (f(x) - f(xprev));
        error = fabs((x_new - x) / x_new);

        printf("Iteration %d: Root = %.4lf  Error = %.4lf\n",
               i+1, x_new, error);

        if (error < eps)
            break;

        xprev = x;
        x = x_new;
    }

    printf("\nThe root of the function is %.4lf\n", x_new);
    return 0;
}
