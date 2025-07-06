#include <iostream>
using namespace std;

class Sample {
    int x;
public:
    friend istream& operator>>(istream& in, Sample &s);
    void show() { cout << "Value: " << x << endl; }
};

istream& operator>>(istream& in, Sample &s) {
    cout << "Enter value: ";
    in >> s.x;
    return in;
}

int main() {
    Sample s;
    cin >> s;
    s.show();
}
