#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int* ptr1 = &arr[1];
    int* ptr2 = &arr[3];

    cout << "Initial ptr1: " << *ptr1 << endl;
    ptr1++;
    cout << "After ptr1++: " << *ptr1 << endl;

    ptr1--;
    cout << "After ptr1--: " << *ptr1 << endl;

    cout << "Pointer subtraction (ptr2 - ptr1): " << ptr2 - ptr1 << endl;

    cout << "ptr2 > ptr1: " << (ptr2 > ptr1) << endl;
    cout << "ptr2 < ptr1: " << (ptr2 < ptr1) << endl;
    cout << "ptr2 == ptr1: " << (ptr2 == ptr1) << endl;

    return 0;
}
