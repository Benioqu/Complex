#include <iostream>
#include "complex.h"

using namespace std;

//definicja funkcji

void print(complex z)
{
    if (z.im > 0)
        cout << z.re << "+" << z.im << "i" << endl;
    else
        cout << z.re << z.im << "i" << endl;
}

complex add(complex z1, complex z2)
{
    complex z3;
    z3.re = z1.re + z2.re;
    z3.im = z1.im + z2.im;

    return z3;
}

complex substract(complex z1, complex z2)
{
	complex z3;
	z3.re = z1.re - z2.re;
	z3.im = z1.im - z2.im;
	return z3;
}

complex multiply(complex z1, complex z2)
{
	complex z3;
	z3.re = z1.re * z2.re - z1.im * z2.im;
	z3.im = z1.re * z2.im + z1.im * z2.re;
	return z3;
}