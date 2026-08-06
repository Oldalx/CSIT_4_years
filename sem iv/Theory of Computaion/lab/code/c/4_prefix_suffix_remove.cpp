// Program: Remove n trailing symbols (prefix2) and num leading symbols (suffix2)
#include <iostream>
#include <cstring>
using namespace std;

void prefix2(char input[100], int n);
void suffix2(char input[100], int num);

int main() {
    char input[100];
    int n, num;

    cout << "Enter the string" << endl;
    cin.getline(input, 100);

    cout << "Enter the number of trailing symbol to be removed" << endl;
    cin >> n;
    prefix2(input, (int)strlen(input) - n);

    cout << "Enter the number of leading symbol to be removed" << endl;
    cin >> num;
    suffix2(input, num);

    cin.get();
    return 0;
}

void prefix2(char input[100], int n) {
    cout << "The prefix is" << endl;
    for (int i = 0; i < n; i++)
        cout << input[i];
    cout << endl;
}

void suffix2(char input[100], int num) {
    cout << "The suffix is" << endl;
    for (int i = num; i < (int)strlen(input); i++)
        cout << input[i];
    cout << endl;
}
