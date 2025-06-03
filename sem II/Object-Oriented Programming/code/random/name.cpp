#include <iostream>
using namespace std;
namespace mathA{
    int add(int a, int b) {
        return a + b;
    }
namespace mathB{
    int add(int a, int b) {
        return a + b + 1;
    }

};
int main(){
    int a = 5;
    int b = 10;
    cout << "mathA::add: " << mathA::add(a, b) << endl; // Calls mathA::add
    cout << "mathB::add: " << mathB::add(a, b) << endl; // Calls mathB::add
    return 0;
}
}