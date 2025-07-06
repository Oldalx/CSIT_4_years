#include <iostream>
using namespace std;

class Rectangle {
private:
    float length, breadth;

public:
    void getData() {
        cout << "Enter length and breadth: ";
        cin >> length >> breadth;
    }

    float area() {
        return length * breadth;
    }

    float perimeter() {
        return 2 * (length + breadth);
    }
};

int main() {
    Rectangle rect;
    rect.getData();
    cout << "Area: " << rect.area() << endl;
    cout << "Perimeter: " << rect.perimeter() << endl;
    return 0;
}
