#include <iostream>
using namespace std;

class Sample {
    int a, b;

public:
    Sample() {
        a = 0;
        b = 0;
        cout << "Default Constructor\n";
    }

    Sample(int x, int y) {
        a = x;
        b = y;
        cout << "Parameterized Constructor\n";
    }

    void display() {
        cout << "a = " << a << ", b = " << b << endl;
    }
};

int main() {
    Sample s1;
    s1.display();

    Sample s2(10, 20);
    s2.display();

    return 0;
}
