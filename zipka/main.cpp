#pragma warning(disable:4996)

#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <math.h>
#include "Drobs.h"

using namespace std;
//public private protected

void main() {

    setlocale(0, "");
    srand(time(NULL));

    Drob d,d2;
    d.setCh(5);
    d.setZn(9);
    d2.setCh(17);
    d2.setZn(8);
    cout << "Первая дробь: ";
    d.print(d);
    cout << "Вторая дробь: ";
    d2.print(d2);
    cout << endl;
    
    /*cout << "\nplus:\t\b";
    cout << d.plus_(d2);
    cout << "\nmin:\t\b";
    cout << d.min_(d2);
    cout << "\nmult:\t\b";
    cout << d.mult(d2);
    cout << "\ndel:\t\b";
    cout << d.del(d2);

    cout << "\n\n-----------------\n\n";*/

    /*d.Fplus(d2);
    d.Fmin(d2);
    d.Fmult(d2);
    d.Fdel(d2);*/

    d.Fplus(d2); cout << "\t\b\b\b\b = " <<  d.plus_(d2) << "\n";
    d.Fmin(d2); cout << "\t\b\b\b\b = " << d.min_(d2) << "\n";
    d.Fmult(d2); cout << "\t\b\b\b\b = " << d.mult(d2) << "\n";
    d.Fdel(d2); cout << "\t\b\b\b\b = " << d.del(d2) << "\n";
}
