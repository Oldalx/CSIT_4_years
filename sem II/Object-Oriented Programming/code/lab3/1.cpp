#include <iostream>
using namespace std;

class Counter {
    int count;
public:
    Counter() : count(0) {}
    void display() { cout << "Count: " << count << endl; }

    // Overload prefix ++
    Counter operator++() {
        ++count;
        return *this;
    }
};

int main() {
    Counter c;
    ++c;
    c.display();
}
