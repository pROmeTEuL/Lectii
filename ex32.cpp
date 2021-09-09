#include "ex32.h"
#include <iostream>

void ex32(){
    int n;
    std::cout << "n=";
    std::cin >> n;
    int i=0;
    for(int a = 1; a < n; a++){
        for(int b = 1; b < n; b++){
            if(((a * a) + (b * b)) == n){
                std::cout << a * a << "+" << b * b << "=" << n << "\n";
                ++i;
            }
        }
    }
    if(!i){
        std::cout << "Nu exista solutii.\n";
    }
}
