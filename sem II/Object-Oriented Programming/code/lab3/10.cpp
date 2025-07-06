#include <iostream>
using namespace std;

class Distance {
    int meter;
public:
    Distance(int m) : meter(m) {}
    operator int() { return meter; }  // Class to basic
};

int main() {
    Distance d(25);
    int m = d;
    cout << "Meters: " << m << endl;
}
