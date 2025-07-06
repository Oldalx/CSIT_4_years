#include <iostream>
using namespace std;

class Distance {
    int meter;
public:
    Distance(int m) { meter = m; }
    void show() { cout << "Meters: " << meter << endl; }
};

int main() {
    Distance d = 15;  // Basic to class
    d.show();
}
