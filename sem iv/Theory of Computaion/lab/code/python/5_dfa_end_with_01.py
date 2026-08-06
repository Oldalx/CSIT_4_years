# DFA accepting language over {0,1} such that string ends with 01
# States: 0 (start), 1 (seen 0), 2 (seen 01 -> accepting)

def delta(current, symbol):
    if current == 0:
        return 1 if symbol == '0' else 0
    elif current == 1:
        return 1 if symbol == '0' else 2
    elif current == 2:
        return 1 if symbol == '0' else 0

def main():
    print("Strings ending with 01")
    w = input("Enter the input: ")
    current = 0
    for symbol in w:
        current = delta(current, symbol)
    if current == 2:
        print(f"{w} is accepted")
    else:
        print(f"{w} is rejected")

if __name__ == "__main__":
    main()
