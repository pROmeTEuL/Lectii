#include "ex31.h"
#include <iostream>

void ex31(){
    int n;
    int a = 0;
    std::cout << "n=";
    std::cin >> n;
    for(int i = 1; i<=n; i++){
        a += 2;
        std::cout << a << " ";
    }
    std::cout << "\n";
}
