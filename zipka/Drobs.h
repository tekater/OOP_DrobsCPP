#pragma once

#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <math.h>

using namespace std;

class Drob {
    int chislit;
    int znamenat;
    int ans;
public:

    void setCh(int one) {
        chislit = one;
    }
    void setZn(int two) {
        znamenat = two;
    }

    double mult(const Drob& d);
    double del(const Drob& d);
    double min_(const Drob& d);
    double plus_(const Drob& d);

    void print(const Drob& d);
    void Fmin(const Drob& d);
    void Fplus(const Drob& d);
    void Fmult(const Drob& d);
    void Fdel(const Drob& d);

    

};

