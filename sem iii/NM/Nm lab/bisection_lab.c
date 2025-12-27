#include <stdio.h>
#include <math.h>

// f(x) = x^2 - 4 sin(x)
double fx(double x) {
    return x*x - 4*sin(x);
}

int main() {
    double xl, xu, xm, xm_old, eps;
    int itr, i;

    printf("Program to find root using Bisection Method\n");
    printf("Enter the value of x_l (lower bracket): ");
    scanf("%lf", &xl);
    printf("Enter the value of x_u (upper bracket): ");
    scanf("%lf", &xu);
    printf("Enter the error tolerance: ");
    scanf("%lf", &eps);
    printf("Enter the number of iterations: ");
    scanf("%d", &itr);

    // Check if root exists
    if (fx(xl) * fx(xu) > 0) {
        printf("Root does not exist in the given interval.\n");
        return 0;
    }

    xm_old = xl;

    for (i = 0; i < itr; i++) {
        xm = (xl + xu) / 2.0;

        if (fx(xl) * fx(xm) < 0)
            xu = xm;
        else
            xl = xm;

        double error = fabs(xm - xm_old);

        printf("Iteration %d: xl=%.3lf xu=%.3lf xm=%.3lf error=%.3lf\n",
               i+1, xl, xu, xm, error);

        if (error < eps)
            break;

        xm_old = xm;
    }

    printf("\nThe value of the root is %.3lf\n", xm);
    return 0;
}
