#include <iostream>
using namespace std;

class Sample {
    bool flag;
public:
    Sample(bool f) : flag(f) {}
    friend bool operator!(Sample s);
};

bool operator!(Sample s) {
    return !s.flag;
}

int main() {
    Sample s(true);
    cout << "!s = " << !s << endl;
}
