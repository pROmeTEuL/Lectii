#include "ex21.h"
#include <iostream>

void ex21() {
	int a;
	int b;
	int i;
	std::cout << "Scrie un numar: ";
	std::cin >> a;
	std::cout << "Scrie un alt numar: ";
	std::cin >> b;
	i = (a + b) % 10;
	std::cout << "Ultima cifra a sumei celor doua numere este: " << i << std::endl;
}