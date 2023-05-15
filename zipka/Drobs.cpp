#include "Drobs.h"
#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <math.h>

using namespace std;


double Drob::mult(const Drob& d)
{
	return (double(chislit) / znamenat) * (double(d.chislit) / d.znamenat);
}

double Drob::min_(const Drob& d)
{
	return double(chislit) / znamenat - double(d.chislit) / d.znamenat;
}
double Drob::del(const Drob& d)
{
	return (double(chislit) / znamenat) / (double(d.chislit) / d.znamenat);
}
double Drob::plus_(const Drob& d)
{
	return double(chislit) / znamenat + double(d.chislit) / d.znamenat;
}
void Drob::print(const Drob& d) {
	cout << d.chislit << "/" << d.znamenat << "\n";
}

//void Drob::Fplus(const Drob& d) {
//	cout << "Plus_Full:\t\b\b\b\b" << chislit * d.znamenat + d.chislit * znamenat << "/" << d.znamenat * znamenat;
//	cout << "\t\b\b\b\b = " << double(chislit) / znamenat + double(d.chislit) / d.znamenat << "\n";
//}
//void Drob::Fmin(const Drob& d) {
//	cout << "Min_Full:\t\b\b\b\b" << chislit * d.znamenat - d.chislit * znamenat << "/" << d.znamenat * znamenat;
//	cout << "\t\b\b\b\b = " << double(chislit) / znamenat - double(d.chislit) / d.znamenat << "\n";
//}
//void Drob::Fmult(const Drob& d) {
//	cout << "Mult_Full:\t\b\b\b\b" << chislit * d.chislit << "/" << d.znamenat * znamenat;
//	cout << "\t\b\b\b\b = " << double(chislit) / znamenat * double(d.chislit) / d.znamenat << "\n";
//}
//void Drob::Fdel(const Drob& d) {
//	cout << "Del_Full:\t\b\b\b\b" << chislit * d.znamenat << "/" << znamenat * d.chislit;
//	cout << "\t\b\b\b\b = " << (double(chislit) / znamenat) / (double(d.chislit) / d.znamenat) << "\n";
//}

void Drob::Fplus(const Drob& d) {
	cout << "Plus_Full:\t\b\b\b\b" << chislit * d.znamenat + d.chislit * znamenat << "/" << d.znamenat * znamenat;
}
void Drob::Fmin(const Drob& d) {
	cout << "Min_Full:\t\b\b\b\b" << chislit * d.znamenat - d.chislit * znamenat << "/" << d.znamenat * znamenat;
}
void Drob::Fmult(const Drob& d) {
	cout << "Mult_Full:\t\b\b\b\b" << chislit * d.chislit << "/" << d.znamenat * znamenat;
}
void Drob::Fdel(const Drob& d) {
	cout << "Del_Full:\t\b\b\b\b" << chislit * d.znamenat << "/" << znamenat * d.chislit;
}

