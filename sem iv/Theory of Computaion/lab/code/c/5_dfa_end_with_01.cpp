// DFA accepting language over {0,1} such that string ends with 01
// States: q0 (start), q1 (seen 0), q2 (seen 01 -> accepting)
#include <iostream>
using namespace std;

int delta(int current, char symbol);

int main() {
    string w;
    cout << "Strings ending with 01" << endl;
    cout << "Enter the input: ";
    cin >> w;

    int current = 0;
    for (int i = 0; i < (int)w.length(); i++)
        current = delta(current, w[i]);

    if (current == 2)
        cout << w << " is accepted" << endl;
    else
        cout << w << " is rejected" << endl;
    return 0;
}

int delta(int current, char symbol) {
    switch (current) {
        case 0: current = (symbol == '0') ? 1 : 0; break;
        case 1: current = (symbol == '0') ? 1 : 2; break;
        case 2: current = (symbol == '0') ? 1 : 0; break;
    }
    return current;
}
