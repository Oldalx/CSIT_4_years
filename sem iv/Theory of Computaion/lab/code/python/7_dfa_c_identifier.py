# DFA that recognizes a valid C identifier

KEYWORDS = {
    "auto", "break", "case", "char", "continue", "do", "default", "const",
    "double", "for", "else", "enum", "extern", "float", "if", "goto", "int",
    "long", "return", "signed", "static", "sizeof", "short", "struct",
    "switch", "typedef", "union", "void", "while", "volatile", "unsigned"
}

def state0(c):
    return 1 if (c.isalpha() or c == '_') else -1

def state1(c):
    return 1 if (c.isalnum() or c == '_') else -1

def dfa_for_identifier(z):
    current_state = 0
    for c in z:
        if current_state == 0:
            current_state = state0(c)
        elif current_state == 1:
            current_state = state1(c)
        else:
            return 0
    return 1 if current_state == 1 else 0

def is_keyword(z):
    return z in KEYWORDS

def main():
    a = input("Enter string: ")
    if is_keyword(a):
        result = -1
    else:
        result = dfa_for_identifier(a)

    if result == 1:
        print(f"{a} : Valid Identifier")
    else:
        print(f"{a} : Invalid Identifier")

if __name__ == "__main__":
    main()
