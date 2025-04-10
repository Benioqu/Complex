#include <iostream>
#include "complex.h"

using namespace std;

int main()
{
	complex a, b;
	cout << "Podaj pierwsza liczbe: ";
	cin >> a.re >> a.im;
	print(a);
	cout << "Podaj druga liczbe: ";
	cin >> b.re >> b.im;
	print(b);
	complex z;
	z = add(a, b);
	print(z);
	z = substract(a, b);
	print(z);
	z = multiply(a, b);
	print(z);
	while(1)
	{

	}
	return 0;
}