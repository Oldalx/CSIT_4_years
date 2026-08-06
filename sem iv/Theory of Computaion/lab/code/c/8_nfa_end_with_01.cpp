// NFA (simulated deterministically) accepting all strings ending with 01
// States: 0 (start), 1 (seen 0), 2 (seen 01 -> accepting)
#include <iostream>
using namespace std;

int NFA_end(string w) {
    int current = 0;
    for (size_t i = 0; i < w.length(); i++) {
        char c = w[i];
        if (current == 0) {
            current = (c == '0') ? 1 : 0;
        } else if (current == 1) {
            if (c == '1') current = 2;
            else if (c == '0') current = 1;
            else current = 0;
        } else { // current == 2, re-evaluate from here
            current = (c == '0') ? 1 : 0;
        }
    }
    return current;
}

int main() {
    string w;
    cout << "Enter string: ";
    cin >> w;

    int current = NFA_end(w);
    if (current == 2)
        cout << w << " is accepted" << endl;
    else
        cout << w << " is rejected" << endl;
    return 0;
}
