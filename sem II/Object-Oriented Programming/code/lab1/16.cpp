#include <iostream>
using namespace std;

int& larger(int &a, int &b) {
    return (a > b) ? a : b;
}

int main() {
    int x = 10, y = 20;
    cout << "Larger: " << larger(x, y) << endl;
    return 0;
}
