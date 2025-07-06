#include <iostream>
using namespace std;

int main() {
    float x = 10.5;
    int y = int(x);  // Explicit
    float z = y;     // Implicit
    cout << "Explicit: " << y << ", Implicit: " << z << endl;
}
