# NFA (simulated deterministically) accepting all strings containing 001 as substring
# States: A=0 (start), B=1 (seen 0), C=2 (seen 00), D=3 (seen 001 -> accepting)

def nfa_substring(w):
    current = 0
    for c in w:
        if current == 0:
            current = 1 if c == '0' else 0
        elif current == 1:
            current = 2 if c == '0' else 0
        elif current == 2:
            if c == '1':
                current = 3
            elif c == '0':
                current = 2
            else:
                current = 0
        else:  # current == 3
            current = 3
    return current

def main():
    w = input("Enter string: ")
    current = nfa_substring(w)
    if current == 3:
        print(f"{w} is accepted")
    else:
        print(f"{w} is rejected")

if __name__ == "__main__":
    main()
