#include <iostream>
using namespace std;

class B;

class A {
    int x;
public:
    A(int a) : x(a) {}
    int getX() { return x; }
    operator B();
};

class B {
    int y;
public:
    B(int b) : y(b) {}
    void show() { cout << "B.y = " << y << endl; }
};

A::operator B() {
    return B(x);
}

int main() {
    A a(10);
    B b = a;  // A to B
    b.show();
}
