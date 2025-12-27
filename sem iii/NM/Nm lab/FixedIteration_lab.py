import math

# Lab 4 - Fixed Point Iteration Method
# f(x) = 3x - cos(x) - 1

def f(x):
    return 3*x - math.cos(x) - 1

# x = g(x)
def g(x):
    return (math.cos(x) + 1) / 3


def fixed_point(xn, eps, n):
    i = 0

    while i < n:
        # compute next approximation
        x_next = g(xn)

        # compute error
        error = abs(x_next - xn)

        print(f"Iteration {i+1}: x = {x_next:.5f}, error = {error:.5f}")

        # stopping condition
        if error < eps:
            return x_next

        # update xn
        xn = x_next
        i += 1

    return xn


if __name__ == '__main__':
    print("Program to find the root of the given function using fixed-point iteration method.")
    x = float(input("Enter the initial guess: "))
    eps = float(input("Enter the error tolerance value: "))
    itr = int(input("Enter the number of iterations: "))

    root = fixed_point(x, eps, itr)
    print(f"\nThe root of the function is {root:.5f}")
