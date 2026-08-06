// Program: Display all prefixes and suffixes of a given string
#include <iostream>
#include <cstring>
using namespace std;

void prefix1(char input[100]);
void suffix1(char input[100]);

int main() {
    char input[100];
    cout << "Enter the string" << endl;
    cin.getline(input, 100);

    prefix1(input);
    suffix1(input);

    cin.get();
    return 0;
}

void prefix1(char input[100]) {
    cout << "The possible prefixes are" << endl;
    for (int i = (int)strlen(input); i > 0; i--) {
        for (int j = 0; j < i; j++)
            cout << input[j];
        cout << "\n";
    }
}

void suffix1(char input[100]) {
    cout << "The possible suffixes are" << endl;
    for (int i = 0; i < (int)strlen(input); i++) {
        for (int j = i; j < (int)strlen(input); j++)
            cout << input[j];
        cout << "\n";
    }
}
