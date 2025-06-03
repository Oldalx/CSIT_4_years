#include <iostream>
using namespace std;

namespace MathA {
    int add(int a, int b) {
        return a + b;
    }
}

namespace MathB {
    int add(int a, int b) {
        return a + b + 10;
    }
}

int main() {
    cout << "MathA add: " << MathA::add(3, 4) << endl;
    cout << "MathB add: " << MathB::add(3, 4) << endl;
    return 0;
}
