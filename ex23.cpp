#include "ex23.h"
#include <iostream>

void ex23() {
	int alei;
	int arbori;
	int crengi;
	int cuiburi;
	int pasari;
	std::cout << "Alei: ";
	std::cin >> alei;
	std::cout << "Arbori: ";
	std::cin >> arbori;
	std::cout << "Crengi: ";
	std::cin >> crengi;
	std::cout << "Cuiburi: ";
	std::cin >> cuiburi;
	std::cout << "Pasari: ";
	std::cin >> pasari;
	std::cout << "Numarul pasarilor este egal cu: " << alei * arbori * crengi * cuiburi * pasari << std::endl;
}