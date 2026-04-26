#include <stdio.h>
#include <math.h>

// f(x) = x^3 - 2x - 5
double f(double x) {
    return x*x*x - 2*x - 5;
}

// f'(x) = 3x^2 - 2
double fd(double x) {
    return 3*x*x - 2;
}

int main() {
    double x, x_new, error, eps;
    int itr, i;

    printf("Program to find root using Newton Raphson Method\n");
    printf("Enter the initial guess: ");
    scanf("%lf", &x);
    printf("Enter the error tolerance: ");
    scanf("%lf", &eps);
    printf("Enter the number of iterations: ");
    scanf("%d", &itr);

    for (i = 0; i < itr; i++) {
        x_new = x - (f(x) / fd(x));
        error = fabs((x_new - x) / x_new);

        printf("Iteration %d: Root = %.5lf  Error = %.5lf\n",
               i+1, x_new, error);

        if (error < eps)
            break;

        x = x_new;
    }

    printf("\nThe root of the function is %.5lf\n", x_new);
    return 0;
}
