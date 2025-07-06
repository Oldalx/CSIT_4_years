#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Constructor called\n";
    }

    ~Demo() {
        cout << "Destructor called\n";
    }
};

int main() {
    Demo d1;
    {
        Demo d2;
    } // Destructor called here for d2
    return 0;
}
