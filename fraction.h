#pragma once

#ifndef _FRACTION_
#define _FRACTION_

#include <numeric> 		//for std::gcd and std::lcm
#include <compare> 		//for <=> operator
#include <cmath>		//for std::pow()
#include <iostream> 	//for Fraction::print()

class Fraction
{
private:

	int numerator;
	int denominator;

public:

	//constructors
	Fraction();
	Fraction(const int number);
	Fraction(const int numerator, const int denominator);
	Fraction(const Fraction& f);

	Fraction(double number);
	
	operator double() const;

	Fraction& simplify();

	//overloaded operators
	Fraction& operator+=(const Fraction& f);
	Fraction& operator-=(const Fraction& f);
	Fraction& operator*=(const Fraction& f);
	Fraction& operator/=(const Fraction& f);

	Fraction operator+(const Fraction& f);
	Fraction operator-(const Fraction& f);
	Fraction operator*(const Fraction& f);
	Fraction operator/(const Fraction& f);

	std::strong_ordering operator<=>(const Fraction& f) const;

	bool operator==(const Fraction& f) const;
	bool operator==(const double i) const;
	bool operator==(const int i) const;

	Fraction operator-();

	//getters
	inline int get_numerator() const;
	inline int get_denominator() const;

	//output
	void print() const;
};

#endif
