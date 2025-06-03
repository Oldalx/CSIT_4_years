#include <iostream>
using namespace std;

int main() {
    int count = 0;
    for (int i = 2; i <= 100; i += 2) {
        cout << i << " ";
        count++;
        if (count % 10 == 0)
            cout << endl;
    }
    return 0;
}
