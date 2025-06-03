#include <iostream>
using namespace std;

class MyClass {
public:
    void greet() {
        cout << "Hello from object!" << endl;
    }
};

int main() {
    int* p = new int(10);
    cout << "Single int: " << *p << endl;
    delete p;

    int* arr = new int[5]{1, 2, 3, 4, 5};
    cout << "Array element: " << arr[2] << endl;
    delete[] arr;

    MyClass* obj = new MyClass;
    obj->greet();
    delete obj;

    return 0;
}
