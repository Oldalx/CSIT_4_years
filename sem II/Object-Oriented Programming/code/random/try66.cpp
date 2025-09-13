#include <iostream>
using namespace std;


class base{
    public:
    int x;
};

class base2{
    public:
    int y;
};
class bas3{
    public:
    int z;
};

class derived: public base, public base2, public bas3{
    // Inherits from base, base2, and bas3
};

int main(){
    d.x =79;
    cout << "Value of x: " << d.x << endl; // Accessing base class member
}