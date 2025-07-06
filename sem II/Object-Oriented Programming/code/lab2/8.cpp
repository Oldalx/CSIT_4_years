#include <iostream>
using namespace std;

class BankAccount {
    string name;
    long acc_no;
    string type;
    float balance;

public:
    void assign(string n, long a, string t, float b) {
        name = n;
        acc_no = a;
        type = t;
        balance = b;
    }

    void deposit(float amt) {
        balance += amt;
    }

    void withdraw(float amt) {
        if (amt <= balance)
            balance -= amt;
        else
            cout << "Insufficient balance!\n";
    }

    void display() {
        cout << "Name: " << name << "\nBalance: " << balance << endl;
    }
};

int main() {
    BankAccount b;
    b.assign("kishor", 123456, "Saving", 5000);
    b.deposit(1000);
    b.withdraw(2000);
    b.display();
    return 0;
}
