#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string name;
    int age;
    float height;

    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter height in cm: ";
    cin >> height;

    cout << setfill('-') << setw(30) << "-" << endl;
    cout << "Name: " << setw(20) << name << endl;
    cout << "Age: " << setw(21) << age << endl;
    cout << fixed << setprecision(2);
    cout << "Height: " << setw(18) << height << " cm" << endl;

    return 0;
}
