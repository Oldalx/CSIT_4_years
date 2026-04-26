import math

# Lab 1 - Bisection Method
# f(x) = x^2 - 4 sin(x)

def fx(x):
    return x**2 - 4*math.sin(x)

def bisection(xu, xl, eps, itr):
    xm_old = xl  # for error calculation

    for i in range(itr):
        f_u = fx(xu)
        f_l = fx(xl)

        # Check if root exists
        if f_u * f_l > 0:
            return "Root does not exist in the initial guess values. Please try other guesses."

        # Midpoint
        xm = (xu + xl) / 2
        f_m = fx(xm)

        # Decide the new interval
        if f_l * f_m < 0:
            xu = xm
        else:
            xl = xm

        # Error calculation
        error = abs(xm - xm_old)

        print(f"The error in the {i+1} iteration is: {error:.3f} "
              f"and xu={xu:.3f}, xl={xl:.3f} and xm={xm:.3f}.")

        # Check stopping condition
        if error < eps:
            return xm

        xm_old = xm

    return xm


if __name__ == "__main__":
    print("Program to return the root of the function using the bisection method.")
    xl = float(input("Enter the value of x_l (lower bracket): "))
    xu = float(input("Enter the value of x_u (upper bracket): "))
    eps = float(input("Enter the value of error tolerance: "))
    itr = int(input("Enter the number of iterations: "))

    root = bisection(xu, xl, eps, itr)

    if isinstance(root, str):
        print(root)
    else:
        print(f"\nThe value of the root is {root:.3f}")
