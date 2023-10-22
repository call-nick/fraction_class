#ifndef FRACTION_H
#define FRACTION_H

#include <numeric>
#include <compare>
#include <iostream>

class Fraction
{
private:
	int numerator;
	int denominator;
public:
	Fraction();
	Fraction(int , int );
	Fraction(const Fraction& f);
	Fraction& simplify();
	Fraction& operator+=(const Fraction& f);
	Fraction operator+(const Fraction& f);
	std::strong_ordering operator<=>(const Fraction& f) const;
	bool operator==(const Fraction& f) const;
	~Fraction();
	int get_numerator() const;
	int get_denominator() const;
	void print() const;
};

#endif
