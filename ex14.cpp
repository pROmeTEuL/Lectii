#include "ex14.h"
#include <iostream>
using namespace std;

void ex14()
{
    int a, b, c;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << "c=";
    cin >> c;
    if (a > b) swap (a, b);
    if (b > c) swap (b, c);
    if (a > b) swap (a, b);
    cout << a << ", " << b << ", " << c << endl;
}
