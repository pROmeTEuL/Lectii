#include "ex26.h"
#include <iostream>
void ex26(){
    int n;
    std::cout << "Scrie un numar de cel putin doua cifre: ";
    std::cin >> n;
    while(n < 10){
        std::cout << "Ce nu intelegi din \"cel putin doua cifre\"?\nMai incearca: ";
        std::cin >> n;
    }
    int i;
    int ip;
    i = n % 10;
    ip = (n / 10) % 10;
    std::cout << "Suma este egala cu: " << i + ip;

}
