import math

# Lab 3 - Secant Method
# f(x) = 3x - cos(x) - 1

# define function f(x)
def f(x):
    return 3*x - math.cos(x) - 1


# Secant Method function
def Secant(xi, xprev, itr, eps):
    for i in range(itr):
        fxi = f(xi)
        fxprev = f(xprev)

        # Secant formula
        x_new = xi - (fxi * (xi - xprev)) / (fxi - fxprev)

        # relative approximate error
        error = abs((x_new - xi) / x_new)

        print(f"The root estimate is: {x_new:.4f} and the error is: {error:.4f}")

        # stopping condition
        if error < eps:
            return x_new
        else:
            xprev = xi
            xi = x_new

    return xi


if __name__ == '__main__':
    print("Program to find the root of the given function using Secant method.")
    xprev = float(input("Enter the initial guess: "))
    x = float(input("Enter the next initial guess: "))
    eps = float(input("Enter the error tolerance value: "))
    itr = int(input("Enter the number of iterations: "))

    root = Secant(x, xprev, itr, eps)
    print(f"\nThe root of the function is {root:.4f}")
