#include <iostream>
using namespace std;

class student{
    public:
        string name;
         int age;
         int grade;

         void Enter_data(){
            cout << "Enter the name: "<<endl;
            cin >> name;
            cout <<"Enter the grade"<<endl;
            cin >> grade;
            cout <<"Enter the age"<<endl;
            cin >>age;
         }

        void display_student(){
            cout <<name << " is in grade " << grade << " and is " <<age << " old"<<endl;

        }
        student(){
            cout <<"Thiss is s ddefult constructor"<<endl;
        }
        student(string name, int age, int grade){
            this -> age = age;
            this -> name = name;
            this -> grade =grade;
        }
};

int main(){
    student s1;
    s1.Enter_data();
    s1.display_student();
}
