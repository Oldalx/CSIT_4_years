#include <iostream>
using namespace std;

void printInfo(string name, string country = "Nepal") {
    cout << "Name: " << name << ", Country: " << country << endl;
}

int main() {
    printInfo("Kisu");
    printInfo("Alex", "USA");
    return 0;
}
