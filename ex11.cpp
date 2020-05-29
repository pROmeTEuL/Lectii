#include "ex11.h"
#include <iostream>

void ex11()
{
    int capre, vaci, gaini, picioare;
    std::cout << "Capre:";
    std::cin >> capre;
    vaci=capre * 2;
    gaini=vaci * 3;
    picioare= capre * 4 + vaci * 4 + gaini * 2;
    std::cout << "Picioare=" << picioare << std::endl;
}
