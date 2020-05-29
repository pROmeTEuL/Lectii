

#include "ex10.hpp"
#include <iostream>

void ex10(){
    int x, z;
    std::cout << "x=";
    std::cin >> x;
    std::cout << "z=";
    std::cin >> z;
    std::cout << "Ioana=" << x << std::endl;
    std::cout << "Maria=" << x+z << std::endl;
    std::cout << "Mihai=" << (x+z)*2 << std::endl;
}
