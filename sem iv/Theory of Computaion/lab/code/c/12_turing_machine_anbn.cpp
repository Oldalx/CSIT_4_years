// Turing Machine for L = { w | w = 0^n 1^n }, i.e. equal number of 0's followed by 1's
#include <iostream>
#include <cstring>
using namespace std;

enum States { q0, q1, q2, q3, q4, qr };

int main() {
    char input[100];
    for (int i = 0; i < 100; i++) input[i] = '\0';

    cout << "\nEnter a binary string: ";
    cin >> input;

    States curr_state = q0;
    int i = 0;

    while (true) {
        switch (curr_state) {
            case q0:
                if (input[i] == '0') {
                    curr_state = q1;
                    input[i] = 'x';
                    i++;
                } else if (input[i] == 'y') {
                    curr_state = q3;
                    i++;
                } else {
                    curr_state = qr;
                }
                break;
            case q1:
                if (input[i] == '0') {
                    i++;
                } else if (input[i] == 'y') {
                    i++;
                } else if (input[i] == '1') {
                    curr_state = q2;
                    input[i] = 'y';
                    i--;
                } else {
                    curr_state = qr;
                }
                break;
            case q2:
                if (input[i] == '0' || input[i] == 'y') {
                    i--;
                } else if (input[i] == 'x') {
                    curr_state = q0;
                    i++;
                } else {
                    curr_state = qr;
                }
                break;
            case q3:
                if (input[i] == 'y') {
                    i++;
                } else if (input[i] == '\0') {
                    curr_state = q4;
                } else {
                    curr_state = qr;
                }
                break;
            default:
                break;
        }
        if (curr_state == qr || curr_state == q4)
            break;
    }

    if (curr_state == q4)
        cout << "\nThe string is accepted" << endl;
    else
        cout << "\nThe string is not accepted" << endl;
    return 0;
}
