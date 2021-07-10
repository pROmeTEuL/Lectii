#include "ex24.h"
#include <iostream>

void ex24() {
	int n;
	std::cout << "Numarul din caini din curte: ";
	std::cin >> n;
	std::cout << "Numarul total de animale din curte este egal cu " << n + 2*n + n*4 << std::endl;
}