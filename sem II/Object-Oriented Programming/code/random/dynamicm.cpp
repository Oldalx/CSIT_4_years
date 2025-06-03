#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int *ptr = new int[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> ptr[i];
    }
    cout << "The elements in the array are: ";
    for (int i = 0; i < size; i++) {
        cout << ptr[i] << " ";
    }
    cout << endl;
    delete[] ptr; // Free the allocated memory
    return 0; // Return success status to the operating system


}