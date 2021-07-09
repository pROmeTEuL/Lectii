#include "ex22.h"
#include <iostream>

void ex22() {
	int f;
	int b;
	int n;
	std::cout << "Fete:";
	std::cin >> f;
	std::cout << "Baieti:";
	std::cin >> b;
	std::cout << "Zile:";
	std::cin >> n;
	 f = (3 * n) * f;
	 b = (2 * n) * b;
	std::cout << "Pagini citite in total: " << f + b << std::endl;
}