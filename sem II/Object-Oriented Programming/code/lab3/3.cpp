#include <iostream>
using namespace std;

class Box {
    int length;
public:
    Box(int l) : length(l) {}
    friend bool operator>(Box b1, Box b2);
};

bool operator>(Box b1, Box b2) {
    return b1.length > b2.length;
}

int main() {
    Box b1(10), b2(5);
    if (b1 > b2)
        cout << "b1 is greater" << endl;
}
