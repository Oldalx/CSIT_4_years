#include <iostream>
using namespace std;

int swap(int a) {  // Pass by reference using &
    a = 3;
    return a;
}

int main () {
    int a = 5;

    cout << "output is " << swap(a) << endl;  // prints 3
    cout << "now a is " << a << endl;         // prints 3, since original a is modified
}
