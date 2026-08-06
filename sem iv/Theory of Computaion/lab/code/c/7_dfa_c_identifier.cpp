// DFA that recognizes a valid C identifier
#include <iostream>
#include <cctype>
using namespace std;

int current_state = 0;

void state0(char c) {
    if (isalpha((unsigned char)c) || c == '_')
        current_state = 1;
    else
        current_state = -1;
}

void state1(char c) {
    if (isalnum((unsigned char)c) || c == '_')
        current_state = 1;
    else
        current_state = -1;
}

int DFA_for_identifier(string z) {
    current_state = 0;
    int len = (int)z.length();
    for (int i = 0; i < len; i++) {
        if (current_state == 0) state0(z[i]);
        else if (current_state == 1) state1(z[i]);
        else return 0;
    }
    return (current_state == 1) ? 1 : 0;
}

bool isKeyword(string z) {
    string keywords[] = {
        "auto","break","case","char","continue","do","default","const",
        "double","for","else","enum","extern","float","if","goto","int",
        "long","return","signed","static","sizeof","short","struct",
        "switch","typedef","union","void","while","volatile","unsigned"
    };
    for (auto &k : keywords)
        if (z == k) return true;
    return false;
}

int main() {
    string a;
    cout << "Enter string: ";
    cin >> a;

    int result;
    if (isKeyword(a))
        result = -1;
    else
        result = DFA_for_identifier(a);

    if (result == 1)
        cout << a << " : Valid Identifier" << endl;
    else
        cout << a << " : Invalid Identifier" << endl;
    return 0;
}
