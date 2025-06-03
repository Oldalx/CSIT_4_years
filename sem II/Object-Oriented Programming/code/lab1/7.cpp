#include <iostream>
using namespace std;

int main() {
    float f = 9.87;
    int i = static_cast<int>(f);
    cout << "Float: " << f << ", After static_cast to int: " << i << endl;
    return 0;
}
