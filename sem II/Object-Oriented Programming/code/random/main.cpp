// main.cpp
#include <iostream>
#include "mytools.h"

int main() {
    mytools::greet();
    std::cout << "Sum: " << mytools::add(5, 7) << std::endl;
    return 0;
}
