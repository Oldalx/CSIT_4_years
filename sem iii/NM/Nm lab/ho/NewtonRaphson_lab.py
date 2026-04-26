import math

# Lab 2 - Newton Raphson Method
# f(x) = x^3 - 2x - 5

# define function f(x)
def f(x):
    return x**3 - 2*x - 5

# define derivative f'(x)
def fd(x):
    return 3*x**2 - 2


# Newton Raphson function
def NewtonRaphson(x, itr, eps):
    for i in range(itr):
        fx = f(x)
        fdx = fd(x)

        # Newton-Raphson formula
        x_new = x - (fx / fdx)

        # relative approximate error
        error = abs((x_new - x) / x_new)

        print(f"The root estimate is: {x_new:.5f} and the error is: {error:.5f}")

        # stopping condition
        if error < eps:
            return x_new

        # update x
        x = x_new

    return x


if __name__ == '__main__':
    print("Program to find the root of the given function using Newton Raphson method.")
    x = float(input("Enter the initial guess: "))
    eps = float(input("Enter the error tolerance value: "))
    itr = int(input("Enter the number of iterations: "))

    root = NewtonRaphson(x, itr, eps)
    print(f"\nThe root of the function is {root:.5f}")
