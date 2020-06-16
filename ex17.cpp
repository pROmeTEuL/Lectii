#include "ex17.h"
#include <iostream>

void ex17()
{
    int c1, c2;
    std::cout << "Primul copil:";
    std::cin >> c1;
    std::cout << "Al doilea copil:";
    std::cin >> c2;
    if(c1 > c2) std::cout << "Primul copil e mai mare decat al doilea cu " << c1 - c2 << "an(i)." << std::endl;
    else if(c1 < c2) std::cout << "Al doilea copil e mai mare decat primul cu " << c2 - c1 << "an(i)." << std::endl;
    else if(c1 == c2) std::cout << "Cei doi copii au aceeasi varsta." << std::endl;
}
