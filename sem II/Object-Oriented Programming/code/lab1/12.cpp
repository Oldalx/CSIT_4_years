#include <iostream>
using namespace std;

int area(int side) {
    return side * side;
}

int area(int length, int width) {
    return length * width;
}

float area(float radius) {
    return 3.14159f * radius * radius;
}

int main() {
    cout << "Square: " << area(5) << endl;
    cout << "Rectangle: " << area(4, 6) << endl;
    cout << "Circle: " << area(3.5f) << endl;
    return 0;
}
