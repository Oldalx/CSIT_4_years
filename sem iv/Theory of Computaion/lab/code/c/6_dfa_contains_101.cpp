// DFA accepting language over {0,1} such that string contains substring 101
// States: q0, q1, q2, q3 (accepting, trap)
#include <iostream>
using namespace std;

int delta(int current_state, char symbol);

int main() {
    string w;
    cout << "String has substring 101" << endl;
    cout << "Enter the input: ";
    cin >> w;

    int current_state = 0;
    for (int i = 0; i < (int)w.length(); i++)
        current_state = delta(current_state, w[i]);

    if (current_state == 3)
        cout << w << " accepted" << endl;
    else
        cout << w << " rejected" << endl;
    return 0;
}

int delta(int current_state, char symbol) {
    switch (current_state) {
        case 0: current_state = (symbol == '0') ? 0 : 1; break;
        case 1: current_state = (symbol == '0') ? 2 : 1; break;
        case 2: current_state = (symbol == '0') ? 0 : 3; break;
        case 3: current_state = 3; break;
    }
    return current_state;
}
