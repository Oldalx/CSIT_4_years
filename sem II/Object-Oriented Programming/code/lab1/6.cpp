#include <iostream>
using namespace std;

int main() {
    int i = 10;
    float f = 5.75;
    char c = 'A';
    bool b = true;
    double d = 9.12345;

    // Implicit conversion
    double result = i + f;

    // Explicit conversion
    int x = (int)d;

    cout << "Implicit result (int + float): " << result << endl;
    cout << "Explicit conversion (double to int): " << x << endl;

    return 0;
}
