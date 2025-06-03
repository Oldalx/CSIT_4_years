// mytools.cpp
#include <iostream>
#include "mytools.h"

namespace mytools {
    void greet() {
        std::cout << "Hello from mytools namespace!" << std::endl;
    }

    int add(int a, int b) {
        return a + b;
    }
}
