#include <iostream>
using namespace std;

class Sample {
    int x;
public:
    Sample(int a) : x(a) {}
    friend ostream& operator<<(ostream& out, Sample s);
};

ostream& operator<<(ostream& out, Sample s) {
    out << "Value: " << s.x;
    return out;
}

int main() {
    Sample s(10);
    cout << s << endl;
}
