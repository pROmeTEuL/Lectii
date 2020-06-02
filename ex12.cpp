#include "ex12.h"
#include <iostream>

void ex12()
{
    int a, b, c, d, m, t;
    std::cout << "Nota1:";
    std::cin >> a;
    std::cout << "Nota2:";
    std::cin >> b;
    std::cout << "Nota3:";
    std::cin >> c;
    std::cout << "Nota4:";
    std::cin >> d;
    std::cout << "Teza:";
    std::cin >> t;
    m = (a + b + c + d) / 4;
    std::cout << "Media, note:" << m << std::endl;
    std::cout << "Media cu teza:" << (3 * m + t) / 4 << std::endl;
}
