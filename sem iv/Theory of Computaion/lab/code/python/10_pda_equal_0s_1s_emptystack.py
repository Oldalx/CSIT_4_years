# PDA accepting L = { w | w in {0,1}* and number of 0's equals number of 1's }
# Acceptance by empty stack

def main():
    inp = input("Enter the string: ")
    stack = ['$']

    for ch in inp:
        top = stack[-1]
        if top == '$' or top == ch:
            stack.append(ch)
        else:
            stack.pop()

    if stack[-1] == '$':
        print(f"{inp} is accepted")
    else:
        print(f"{inp} is rejected")

if __name__ == "__main__":
    main()
