#include <iostream>
using namespace std;

inline int cube(int x) {
    return x * x * x;
}

int main() {
    cout << "Cube of 3: " << cube(3) << endl;
    return 0;
}
