# Program: Extract substring given starting position (a) and ending position (b)

def substring1(w, start, end):
    print("The substring is")
    print(w[start:end + 1])

def main():
    inp = input("Enter the string\n")
    while True:
        start = int(input("Enter the starting position of the substring\n"))
        end = int(input("Enter the ending position of the substring\n"))
        if not (start < 1 or end > len(inp)):
            break
    substring1(inp, start - 1, end - 1)

if __name__ == "__main__":
    main()
