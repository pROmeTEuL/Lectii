#include "ex20.h"
#include <iostream>
#include <cmath>

void ex20()
{
    int a, b, c;
    std::cout << "a=";
    std::cin >> a;
    std::cout << "b=";
    std::cin >> b;
    std::cout << "c=";
    std::cin >> c;
    if (a > b) std::swap (a, b);
    if (b > c) std::swap (b, c);
    if (a > b) std::swap (a, b);
    if (c >= a + b) {
        std::cout << "Bagatil-ai in cur, asta nu e triunghi!" << std::endl;
        return;
    }
    if (a == b && b == c) std::cout << "E triunghi echilateral." << std::endl;
    else if (c == sqrt(a * a + b * b)) std::cout << "E triunghi dreptunghic." << std::endl;
    else if (b == c && a != c) std::cout << "E triunghi isoscel" << std::endl;
    else std::cout << "E triunghi oarecare." << std::endl;
}
