#include <iostream>
using namespace std;

class base {
    public:
        string name;
        int age;
        base(string n, int a){
            name = n;
            age = a;
        }
        void display(){
            cout << "Name: " << name << ", Age: " << age << endl;
        }

            
    };
    int main(){
        base b("kiran", 20);
        b.display();       
         return 0;
    }
    