#include <iostream>
using namespace std;

class Distance {
    int feet, inch;
public:
    Distance(int f = 0, int i = 0) : feet(f), inch(i) {}
    Distance add(Distance d) {
        int i = inch + d.inch;
        int f = feet + d.feet + i / 12;
        i %= 12;
        return Distance(f, i);
    }
    void show() { cout << feet << " feet " << inch << " inch\n"; }
};

int main() {
    Distance d1(5, 8), d2(4, 11), d3;
    d3 = d1.add(d2);
    d3.show();
}
