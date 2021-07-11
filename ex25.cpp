#include "ex25.h"
#include <iostream>

void ex25(){
    int n;
    std::cout << "Globuri albe: ";
    std::cin >> n;
    std::cout << "Numarul tuturor globurilor este egal cu: " << n + (2 * n) + (2 * n - 3) << std::endl;
}
