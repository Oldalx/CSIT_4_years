#include <iostream>
using namespace std;

class human{
    public:
        int age;
        sting name;
        void display(){
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
        void setName(string n){
            name = n;
        }
        void setAge(int a){
            age = a;
        }
        void setNameAndAge(string n, int a){
            name = n;
            age = a;
        }
        void setNameAndAge(int a, string n){
            age = a;
            name = n;
        }
        void setNameAndAge(string n, string a){
            name = n;
            age = stoi(a);
        }
        void setNameAndAge(int a, int n){
            age = a;
            name = to_string(n);
        }
        void setNameAndAge(string n, int a, string extra){
            name = n;
            age = a;
            cout << "Extra: " << extra << endl;
        }
        void setNameAndAge(int a, string n, int extra){
            age = a;
            name = n;
            cout << "Extra: " << extra << endl;
        }};
int main(){
    cout <<"Enter your name: ";
    string name;
    cin >> name;
    cout << "Enter your age: ";
    int age;
    cin >> age;
    human h;
    h.setName(name);
    h.setAge(age);
    h.display();
    h.setNameAndAge(name, age);
    h.display();
}