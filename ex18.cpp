#include "ex18.h"
#include <iostream>

void ex18()
{
    int an;
    std::cout << "Scrie anul:";
    std::cin >> an;
    if(an%4==0 && (an%100!=0 || an%400==0)) std::cout << "Anul este bisect." << std::endl;
    else std::cout << "Anul nu este bisect" << std::endl;
}
