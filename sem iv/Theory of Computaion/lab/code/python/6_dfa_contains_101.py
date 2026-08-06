# DFA accepting language over {0,1} such that string contains substring 101
# States: 0, 1, 2, 3 (accepting, trap)

def delta(current_state, symbol):
    if current_state == 0:
        return 0 if symbol == '0' else 1
    elif current_state == 1:
        return 2 if symbol == '0' else 1
    elif current_state == 2:
        return 0 if symbol == '0' else 3
    elif current_state == 3:
        return 3

def main():
    print("String has substring 101")
    w = input("Enter the input: ")
    current_state = 0
    for symbol in w:
        current_state = delta(current_state, symbol)
    if current_state == 3:
        print(f"{w} accepted")
    else:
        print(f"{w} rejected")

if __name__ == "__main__":
    main()
