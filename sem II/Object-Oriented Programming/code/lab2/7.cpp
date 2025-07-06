#include <iostream>
using namespace std;

class Circle {
    float radius;

public:
    void input() {
        cout << "Enter radius: ";
        cin >> radius;
    }

    float calculateArea() {
        return 3.1416 * radius * radius;
    }

    void display() {
        cout << "Area of Circle: " << calculateArea() << endl;
    }
};

int main() {
    Circle c;
    c.input();
    c.display();
    return 0;
}
