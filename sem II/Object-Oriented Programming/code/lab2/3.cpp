#include <iostream>
#include <cmath>
using namespace std;

class Area {
public:
    Area(float base, float height) {
        cout << "Triangle Area: " << 0.5 * base * height << endl;
    }

    Area(float length, float breadth, bool isRectangle) {
        cout << "Rectangle Area: " << length * breadth << endl;
    }

    Area(float radius) {
        cout << "Circle Area: " << 3.1416 * radius * radius << endl;
    }
};

int main() {
    int choice;
    cout << "1. Triangle\n2. Rectangle\n3. Circle\nChoose shape: ";
    cin >> choice;

    if (choice == 1) {
        float b, h;
        cout << "Enter base and height: ";
        cin >> b >> h;
        Area a(b, h);
    } else if (choice == 2) {
        float l, b;
        cout << "Enter length and breadth: ";
        cin >> l >> b;
        Area a(l, b, true);
    } else if (choice == 3) {
        float r;
        cout << "Enter radius: ";
        cin >> r;
        Area a(r);
    }

    return 0;
}
