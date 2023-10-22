#ifndef DEBUG

#include <iostream>

#include "fraction.h"

int main(int argc, char* argv[])
{

	Fraction fraction1(1, 2);
	Fraction fraction2(1, 2);

	Fraction fraction3 = fraction1 + fraction2;
	fraction2 += fraction1;
	fraction2.print();
	std::cout << std::endl;

	Fraction f1(3,4);
	Fraction f2(2,5);

	Fraction f3 =  f1 + f2;

	f3.print();
	std::cout << std::endl;

	return 0;
}
#endif
