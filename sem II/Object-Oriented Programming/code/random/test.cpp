#include <iostream>
using namespace std;

class introduction{
    public:
        string name;
        string age;

        void display(){
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }

  
        introduction(string n, string a){
            name = n;
            age = a;
        }
}; // Close the class definition

int main(){
    introduction person("John Doe", "25");
    person.display();
    return 0;
}


    