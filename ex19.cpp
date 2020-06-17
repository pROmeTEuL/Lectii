#include "ex19.h"
#include <iostream>
#include <cmath>

void ex19()
{
    int minut, ora;
    std::cout << "Scrie minutul:";
    std::cin >> minut;
    std::cout << "Scrie ora:";
    std::cin >> ora;
    minut=(360/60)*minut;
    ora=(360/12)*ora;
//    if (ora>minut) std::cout << "Unghiul este de " << ora - minut << " grade." << std::endl;          |
//    else if (ora<minut) std::cout << "Unghiul este de " << minut - ora << " grade." << std::endl;     |---> Varianta mea!
//    else if (ora==minut) std::cout << "Unghiul este de 0 grade." << std::endl;                        |
    std::cout << "Unghiul este de " << abs(ora-minut) << " grade." << std::endl;
}
