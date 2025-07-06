#include <iostream>
using namespace std;

class Currency {
private:
    float amount;

public:
    void convert() {
        int choice;
        cout << "1. USD to NPR\n2. NPR to USD\nEnter choice: ";
        cin >> choice;
        cout << "Enter amount: ";
        cin >> amount;

        if (choice == 1)
            cout << "NPR: " << amount * 132.50 << endl;
        else
            cout << "USD: " << amount / 132.50 << endl;
    }
};

int main() {
    Currency c;
    c.convert();
    return 0;
}
