# Turing Machine for L = { w | w = 0^n 1^n }, i.e. equal number of 0's followed by 1's

Q0, Q1, Q2, Q3, Q4, QR = range(6)

def main():
    raw = input("\nEnter a binary string: ")
    tape = list(raw) + ['\0'] * 10  # extra blanks to the right, like a real tape

    curr_state = Q0
    i = 0

    while True:
        if curr_state == Q0:
            if tape[i] == '0':
                curr_state = Q1
                tape[i] = 'x'
                i += 1
            elif tape[i] == 'y':
                curr_state = Q3
                i += 1
            else:
                curr_state = QR

        elif curr_state == Q1:
            if tape[i] == '0':
                i += 1
            elif tape[i] == 'y':
                i += 1
            elif tape[i] == '1':
                curr_state = Q2
                tape[i] = 'y'
                i -= 1
            else:
                curr_state = QR

        elif curr_state == Q2:
            if tape[i] in ('0', 'y'):
                i -= 1
            elif tape[i] == 'x':
                curr_state = Q0
                i += 1
            else:
                curr_state = QR

        elif curr_state == Q3:
            if tape[i] == 'y':
                i += 1
            elif tape[i] == '\0':
                curr_state = Q4
            else:
                curr_state = QR

        if curr_state in (QR, Q4):
            break

    if curr_state == Q4:
        print("\nThe string is accepted")
    else:
        print("\nThe string is not accepted")

if __name__ == "__main__":
    main()
