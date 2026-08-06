// NFA (simulated deterministically) accepting all strings containing 001 as substring
// States: A=0 (start), B=1 (seen 0), C=2 (seen 00), D=3 (seen 001 -> accepting)
#include <iostream>
using namespace std;

int NFA_substring(string w) {
    int current = 0;
    for (char c : w) {
        switch (current) {
            case 0: current = (c == '0') ? 1 : 0; break;
            case 1: current = (c == '0') ? 2 : 0; break;
            case 2: current = (c == '1') ? 3 : ((c == '0') ? 2 : 0); break;
            case 3: current = 3; break;
        }
    }
    return current;
}

int main() {
    string w;
    cout << "Enter string: ";
    cin >> w;

    int current = NFA_substring(w);
    if (current == 3)
        cout << w << " is accepted" << endl;
    else
        cout << w << " is rejected" << endl;
    return 0;
}
