#include "ex28.h"
#include <iostream>

void ex28(){
    int n;
    float i;
    float r = 1; //Daca as fi pus 2 ar fi impartit cu 1 in plus (l-ar fi luat si pe 0) :D
    std::cout << "Primul numar pentru media aritmetica: ";
    std::cin >> n;
    i = n;
    std::cout << "Al doilea numar: ";
    std::cin >> n;
    while(n != 0){
        i = i + n;
        std::cout << "Urmatorul numar (0 = iesire): ";
        std::cin >> n;
        ++r;
    }
    std::cout << "Media aritmetica este egala cu " << i / r << std::endl;
}
