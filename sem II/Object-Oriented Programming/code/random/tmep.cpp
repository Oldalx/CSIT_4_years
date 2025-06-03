#include <iostream>
using namespace std;
class calculator{
    public:
        int a,b;
        int add(int a,int b){
            return a+b;
        }
        int sub(int a,int b){
            return a-b;
        }
        int mul(int a,int b){
            return a*b;
        }
        int div(int a,int b){
            if(b==0){
                cout<<"Division by zero is not allowed"<<endl;
                return 0;
            }
            return a/b;
        }
        void display(){
            cout<<"Addition: "<<add(a,b)<<endl;
            cout<<"Subtraction: "<<sub(a,b)<<endl;
            cout<<"Multiplication: "<<mul(a,b)<<endl;
            cout<<"Division: "<<div(a,b)<<endl;
        }};
int main(){
    calculator c;
    cout<<"Enter two numbers: ";
    cin>>c.a>>c.b;
    c.display();
    return 0;
    
}