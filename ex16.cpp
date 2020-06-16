#include "ex16.h"
#include <iostream>
#include <cmath>

void ex16()
{
    int n;
    std::cout << "n=";
    std::cin >> n;
    double r = sqrt(n);
    if(round(r)==r) std::cout << "Este patrat perfect." << std::endl;
    else std::cout << "Nu este patrat perfect." << std::endl;
}
