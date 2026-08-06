# Program: Display all prefixes and suffixes of a given string

def prefix1(w):
    print("The possible prefixes are")
    for i in range(len(w), 0, -1):
        print(w[:i])

def suffix1(w):
    print("The possible suffixes are")
    for i in range(len(w)):
        print(w[i:])

def main():
    w = input("Enter the string\n")
    prefix1(w)
    suffix1(w)

if __name__ == "__main__":
    main()
