#ifndef DEBUG //with debug flag the tests in tests.cpp will start

#include "fraction.h"
#include <vector>

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char* argv[])
{

	//example op usage Fraction class

	//this how you can create a Fraction instance
	Fraction f1; // 0/1
	f1.print(); // if denominator == 1 or -1, then print() method doesn't show denominator
	cout << endl;

	Fraction f2(1, 2); // 1/2
	f2.print();
	cout << endl;

	Fraction f3{ 2,3 }; // 2/3
	f3.print();
	cout << endl;

	int num_int = 6;
	Fraction f4 = num_int; // 6/1
	cout << f4;
	cout << endl;

	double num_double = 8.5;
	Fraction f5{ num_double }; // 17/2
	f5.print();
	cout << endl;

	//this how you can use different methods

	cout << "simplifying" << endl;
	Fraction F1 (185,25);
	F1.print(); cout << endl;
	F1.simplify();
	F1.print(); cout << endl;

	cout << "get numerator" << endl;
	Fraction F2(132, 12);
	cout << F2.get_numerator () << "/" << F2.get_denominator() << endl;

	Fraction F3 = 5;
	Fraction F4 = 7.5;

	cout << "operators + - * /: " << endl;
	Fraction F5;
	F5 = F3 + F4; F5.print(); cout << endl;
	F5 = F3 - F4; F5.print(); cout << endl;
	F5 = F3 * F4; F5.print(); cout << endl;
	F5 = F3 / F4; F5.print(); cout << endl;

	if (F4 > F3)
	{
		cout << "You also can compare fraction because of overloaded <=> and == operators";
	}

	return 0;
}
#endif
