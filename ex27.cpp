#include "ex27.h"
#include <iostream>

void ex27(){
    int n;
    int r = 0;
    std::cout << "Scrie un numar: ";
    std::cin >> n;
    for(int i = 0; i <= n; i++){
        if(i * i == n){
            r = i;
            std::cout << "Radical din acest numar este egal cu " << r << std::endl;
        }
    }
    if(r == 0){
        std::cout << "Nu s-a putut calcula radical din acest numar deoarece acesta este prim." << std::endl;
    }
}
