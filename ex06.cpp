

#include "ex06.hpp"
#include <iostream>
#include <cmath>

void ex06(){
    int os;
    int ms;
    int op;
    int mp;
    std::cout << "op=";
    std::cin >> op;
    std::cout << "mp=";
    std::cin >> mp;
    std::cout << "os=";
    std::cin >> os;
    std::cout << "ms=";
    std::cin >> ms;
    
    if(ms < mp) {
        std::cout << os-1-op << ":" << ms + 60 - mp << std::endl;
    }else{
        std::cout << os - op << ":" << ms - mp << std::endl;
    }
}
