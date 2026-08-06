# NFA (simulated deterministically) accepting all strings ending with 01
# States: 0 (start), 1 (seen 0), 2 (seen 01 -> accepting)

def nfa_end(w):
    current = 0
    for c in w:
        if current == 0:
            current = 1 if c == '0' else 0
        elif current == 1:
            if c == '1':
                current = 2
            elif c == '0':
                current = 1
            else:
                current = 0
        else:  # current == 2, re-evaluate from here
            current = 1 if c == '0' else 0
    return current

def main():
    w = input("Enter string: ")
    current = nfa_end(w)
    if current == 2:
        print(f"{w} is accepted")
    else:
        print(f"{w} is rejected")

if __name__ == "__main__":
    main()
