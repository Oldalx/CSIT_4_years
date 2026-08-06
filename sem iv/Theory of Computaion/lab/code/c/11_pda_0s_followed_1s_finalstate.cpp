// PDA accepting L = { w | w in {0,1}* and 0's are followed by an equal number of 1's }
// i.e. L = { 0^n 1^n }, acceptance by final state
#include <iostream>
using namespace std;
#define MAX 100

char symbolStack[MAX];
int top = -1;

void push(char ch) {
    if (top < MAX - 1)
        symbolStack[++top] = ch;
    else
        cout << "Stack is full\n";
}

char pop() {
    if (top > -1)
        return symbolStack[top--];
    cout << "Stack is empty\n";
    return '\0';
}

char getTop() {
    return symbolStack[top];
}

int main() {
    string input;
    cout << "Enter string: ";
    cin >> input;

    push('$');
    int state = 0; // 0: reading 0's, 1: reading 1's
    bool valid = true;

    for (char ch : input) {
        if (state == 0) {
            if (ch == '0') {
                push('0');
            } else if (ch == '1') {
                if (getTop() == '0') { pop(); state = 1; }
                else { valid = false; break; }
            } else { valid = false; break; }
        } else {
            if (ch == '1') {
                if (getTop() == '0') pop();
                else { valid = false; break; }
            } else { valid = false; break; }
        }
    }

    if (valid && getTop() == '$')
        cout << input << " is accepted" << endl;
    else
        cout << input << " is rejected" << endl;
    return 0;
}
