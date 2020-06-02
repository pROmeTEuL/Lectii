#include "ex13.h"
#include <iostream>

void ex13()
{
    double x, y;
    std::cout << "x=";
    std::cin >> x;
    std::cout << "y=";
    std::cin >> y;
    if (x > y) std::cout << x << std::endl;
    else if (x < y) std::cout << y << std::endl;
    else if (x == y) std::cout << "Numerele sunt egale." << std::endl;
}
