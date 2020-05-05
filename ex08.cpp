

#include "ex08.hpp"
#include <iostream>

void ex08(){
    int x, y;
    std::cout << "Iepuroaice:";
    std::cin >> x;
    std::cout << "Pui nascuti de fiecare iepuroaica:";
    std::cin >> y;
    std::cout << "Iepuri in total:" << x + x * y << "\n";
}
