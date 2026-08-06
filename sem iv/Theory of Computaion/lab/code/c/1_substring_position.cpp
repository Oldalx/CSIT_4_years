// Program: Extract substring given starting position (a) and ending position (b)
#include <iostream>
#include <cstring>
using namespace std;

void substring1(char w[100], int start, int end);

int main() {
    char input[100];
    int start, end;

    cout << "Enter the string" << endl;
    cin.getline(input, 100);

    do {
        cout << "Enter the starting position of the substring" << endl;
        cin >> start;
        cout << "Enter the ending position of the substring" << endl;
        cin >> end;
    } while (start < 1 || end > (int)strlen(input));

    substring1(input, start - 1, end - 1);
    cin.ignore();
    cin.get();
    return 0;
}

void substring1(char w[100], int start, int end) {
    cout << "The substring is" << endl;
    for (int i = start; i <= end; i++)
        cout << w[i];
    cout << endl;
}
