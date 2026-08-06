// Program: Extract substring given starting position (a) and number of symbols (b)
#include <iostream>
#include <cstring>
using namespace std;

void substring2(char w[100], int start, int noOfSymbol);

int main() {
    char input[100];
    int start, noOfSymbol;

    cout << "Enter the string" << endl;
    cin.getline(input, 100);

    do {
        cout << "Enter the starting position of the substring" << endl;
        cin >> start;
        cout << "Enter the number of symbol to be extracted" << endl;
        cin >> noOfSymbol;
    } while (start < 1 || noOfSymbol > (int)strlen(input));

    substring2(input, start - 1, noOfSymbol);
    cin.ignore();
    cin.get();
    return 0;
}

void substring2(char w[100], int start, int noOfSymbol) {
    cout << "The substring is" << endl;
    for (int i = start, count = 0; count < noOfSymbol && w[i] != '\0'; i++, count++)
        cout << w[i];
    cout << endl;
}
