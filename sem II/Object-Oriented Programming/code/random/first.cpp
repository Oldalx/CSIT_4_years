#include <iostream>
using namespace std;
class bank{

    public:
    int balance;
    int account_number;
    void deposit(int amount){
        balance += amount;
        cout << "Deposited: " <<amount << endl;
        cout<< "New balance: "<< balance << endl;
    }

    void withdraw(int amount){
            balance -= amount;
            cout << "withdrawn: " << amount << endl;
            cout << "New balance: " << balance << endl;
       
        }
    void check_balance(){
            cout << "Current balance: " << balance << endl;
        }

        
    
};

int main(){
    bank myBank;
    myBank.deposit(1000);
    return 0;

}