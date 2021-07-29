#include "ex30.h"
#include <iostream>

void ex30(){
    int n;
    int i = -1;
    do{
        std::cout << "Numarul:";
        std::cin >> n;
        if(n%2==0){
            ++i;
        }
    }while(n);
    std::cout << i << " numere sunt pare." << std::endl;
}
