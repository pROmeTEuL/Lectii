#include <iostream>
#include "ex01.hpp"
#include "ex02.hpp"
#include "ex03.hpp"
#include "ex04.hpp"
#include "ex05.hpp"
#include "ex06.hpp"
#include "ex07.hpp"
#include "ex08.hpp"
#include "ex09.hpp"
#include "ex10.hpp"
#include "ex11.h"
#include "ex12.h"
#include "ex13.h"
#include "ex14.h"
#include "ex15.h"
#include "ex16.h"
#include "ex17.h"
#include "ex18.h"
#include "ex19.h"
#include "ex20.h"
#include "ex21.h"
#include "ex22.h"
#include "ex23.h"
#include "ex24.h"
#include "ex25.h"
#include "ex26.h"
#include "ex27.h"
#include "ex28.h"

using namespace std;

// Mai urmeaza exercitii :D

int main() {
    int exercitiu;
    do {
        cout << "Ce exercitiu vrei sa rulezi (0 = iesire) (1 -- 28) = ";
        cin >> exercitiu;
        switch (exercitiu) {
        case 0:
            break;

        case 1:
            ex01();
            break;

        case 2:
            ex02();
            break;

        case 3:
            ex03();
            break;

        case 4:
            ex04();
            break;

        case 5:
            ex05();
            break;

        case 6:
            ex06();
            break;

        case 7:
            ex07();
            break;

        case 8:
            ex08();
            break;

        case 9:
            ex09();
            break;

        case 10:
            ex10();
            break;

        case 11:
            ex11();
            break;

        case 12:
            ex12();
            break;

        case 13:

            ex13();
            break;

        case 14:
            ex14();
            break;

        case 15:
            ex15();
            break;

        case 16:
            ex16();
            break;

        case 17:
            ex17();
            break;

        case 18:
            ex18();
            break;

        case 19:
            ex19();
            break;

        case 20:
            ex20();
            break;

        case 21:
            ex21();
            break;

        case 22:
            ex22();
            break;

        case 23: 
            ex23();
            break;
        
        case 24:
            ex24();
            break;

        case 25:
            ex25();
            break;

        case 26:
            ex26();
            break;

        case 27:
            ex27();
            break;
        case 28:
            ex28();
            break;
        }
    } while (exercitiu != 0);
    return 0;
}
