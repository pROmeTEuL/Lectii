
#include "ex07.hpp"
#include <iostream>
using namespace std;

void ex07(){
    int suma;
    int b100;
    int b10;
    int b1;
    cout << "Suma totala de bani=";
    cin >> suma;
    b100 = suma / 100;
    suma = suma - b100 * 100;
    b10 = suma / 10;
    b1 = suma - b10 * 10;
    cout << "bancnote de 100 = " << b100 << " de 10=" << b10 << " iar de 1= " << b1 << endl;
}
