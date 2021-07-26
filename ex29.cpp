#include "ex29.h"
#include <iostream>

void ex29(){
    int a, b, c, d, e, x, y, z;
    std::cout << "Scrie cinci numere:";
    std::cin >> a >> b >> c >> d >> e;
//             X
       x=a;
       if(b > x){
           x = b;
       }
       if(c > x){
           x = c;
       }
       if(d > x){
           x = d;
       }
       if(e > x){
           x = e;
       }

//         Y
       y=a;
       if(b > y && b < x){
           y = b;
       }
       if(c > y && c < x){
           y = c;
       }
       if(d > y && d < x){
           y = d;
       }
       if(e > y && e < x){
           y = e;
       }

//           Z
       z=a;
       if(b >z && b < y){
           z = b;
       }
       if(c > z && c < y){
           z = c;
       }
       if(d > z && d < y){
           z = d;
       }
       if(e > z && e < y){
           z = e;
       }

    std::cout << "Suma dintre cele mai mari trei numere este " << x + y + z << std::endl;
}
