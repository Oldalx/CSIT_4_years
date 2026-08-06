# PDA accepting L = { w | w in {0,1}* and 0's are followed by an equal number of 1's }
# i.e. L = { 0^n 1^n }, acceptance by final state

def main():
    inp = input("Enter string: ")
    stack = ['$']
    state = 0  # 0: reading 0's, 1: reading 1's
    valid = True

    for ch in inp:
        if state == 0:
            if ch == '0':
                stack.append('0')
            elif ch == '1':
                if stack[-1] == '0':
                    stack.pop()
                    state = 1
                else:
                    valid = False
                    break
            else:
                valid = False
                break
        else:
            if ch == '1':
                if stack[-1] == '0':
                    stack.pop()
                else:
                    valid = False
                    break
            else:
                valid = False
                break

    if valid and stack[-1] == '$':
        print(f"{inp} is accepted")
    else:
        print(f"{inp} is rejected")

if __name__ == "__main__":
    main()
