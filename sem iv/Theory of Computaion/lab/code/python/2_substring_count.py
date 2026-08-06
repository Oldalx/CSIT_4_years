# Program: Extract substring given starting position (a) and number of symbols (b)

def substring2(w, start, no_of_symbol):
    print("The substring is")
    print(w[start:start + no_of_symbol])

def main():
    inp = input("Enter the string\n")
    while True:
        start = int(input("Enter the starting position of the substring\n"))
        no_of_symbol = int(input("Enter the number of symbol to be extracted\n"))
        if not (start < 1 or no_of_symbol > len(inp)):
            break
    substring2(inp, start - 1, no_of_symbol)

if __name__ == "__main__":
    main()
