# Program: Remove n trailing symbols (prefix2) and num leading symbols (suffix2)

def prefix2(w, n):
    print("The prefix is")
    print(w[:n])

def suffix2(w, num):
    print("The suffix is")
    print(w[num:])

def main():
    w = input("Enter the string\n")
    n = int(input("Enter the number of trailing symbol to be removed\n"))
    prefix2(w, len(w) - n)
    num = int(input("Enter the number of leading symbol to be removed\n"))
    suffix2(w, num)

if __name__ == "__main__":
    main()
