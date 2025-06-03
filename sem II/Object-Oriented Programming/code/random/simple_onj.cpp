#include <iostream>
using namespace std;

class animal{
    public:
        string name;
        string breed;
        int age;
        string color;

        void bark(){
            cout << "dog Name: "<< name << " age:" << age << " breed: " << breed << " color: " << color << endl;
            cout << "Woof Woof" << endl;
        }

};
int main(){
    animal dog;
    dog.name = "Tommy";
    dog.breed = "Labrador";
    dog.age = 5;
    dog.color = "Black";
    dog.bark();
    }
