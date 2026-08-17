```python
Q0, Q1, Q2, Q3, Q4, QR = range(6)

def main():
    raw = input("\nEnter a binary string: ")
    tape = list(raw) + ['\0'] * 10
    state, i = Q0, 0

    while state not in (QR, Q4):
        c = tape[i]

        if state == Q0:
            if c == '0':
                tape[i], state, i = 'x', Q1, i + 1
            elif c == 'y':
                state, i = Q3, i + 1
            else:
                state = QR

        elif state == Q1:
            if c in ('0', 'y'):
                i += 1
            elif c == '1':
                tape[i], state, i = 'y', Q2, i - 1
            else:
                state = QR

        elif state == Q2:
            if c in ('0', 'y'):
                i -= 1
            elif c == 'x':
                state, i = Q0, i + 1
            else:
                state = QR

        elif state == Q3:
            if c == 'y':
                i += 1
            elif c == '\0':
                state = Q4
            else:
                state = QR

    if state == Q4:
        print("\nThe string is accepted")
    else:
        print("\nThe string is not accepted")

if __name__ == "__main__":
    main()
```
