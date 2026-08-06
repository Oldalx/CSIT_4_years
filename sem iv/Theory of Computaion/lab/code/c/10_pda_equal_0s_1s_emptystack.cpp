// PDA accepting L = { w | w in {0,1}* and number of 0's equals number of 1's }
// Acceptance by empty stack
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
    cout << "Enter the string: ";
    cin >> input;

    push('$');
    for (char ch : input) {
        char st_top = getTop();
        if (st_top == '$' || st_top == ch)
            push(ch);
        else
            pop();
    }

    if (getTop() == '$')
        cout << input << " is accepted" << endl;
    else
        cout << input << " is rejected" << endl;
    return 0;
}
