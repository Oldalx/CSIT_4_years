#include <iostream>
using namespace std;

class A {
    int x;
public:
    A(int a = 0) : x(a) {}
    int getX() { return x; }
};

class B {
    int y;
public:
    B() : y(0) {}
    B(A a) { y = a.getX(); }
    void show() { cout << "B.y = " << y << endl; }
};

int main() {
    A a(20);
    B b = a;  // Conversion in destination class
    b.show();
}
