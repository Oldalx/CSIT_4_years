#include <iostream>
using namespace std;

class Area {
public:
    // Overloaded function for rectangle
    void area(int length, int breadth) {
        cout << "Area of Rectangle: " << length * breadth << endl;
    }

    // Overloaded function for square
    void area(int side) {
        cout << "Area of Square: " << side * side << endl;
    }

    // Overloaded function for circle (using float)
    void area(float radius) {
        cout << "Area of Circle: " << 3.14 * radius * radius << endl;
    }
};

int main() {
    Area a;

    int l, b;
    cout << "Enter length and breadth of rectangle: ";
    cin >> l >> b;
    a.area(l, b);  // rectangle

    int s;
    cout << "Enter side of square: ";
    cin >> s;
    a.area(s);     // square

    float r;
    cout << "Enter radius of circle: ";
    cin >> r;
    a.area(r);     // circle

    return 0;
}
