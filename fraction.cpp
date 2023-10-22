#include "fraction.h"

//Init with 1,1, because 0,0 is incorrect fraction
Fraction::Fraction() : numerator(1), denominator (1) {}

Fraction::Fraction(int numerator, int denominator) : numerator(numerator), denominator(denominator) {}

Fraction::Fraction(const Fraction& f) : numerator(f.numerator), denominator(f.denominator) {}

Fraction::~Fraction() {}

Fraction& Fraction::simplify()
{
	if (this->denominator == 0)
		return *this; //In future it's recommended to make an exception handling here 
	int common_denomitator = std::gcd(this->numerator, this->denominator);
	this->numerator /= common_denomitator;
	this->denominator /= common_denomitator;
	return *this;
}

Fraction& Fraction::operator+=(const Fraction& f)
{

	if (this->denominator == 0 || f.denominator == 0)
		return *this; //In future it's recommended to make an exception handling here 

	int lcm {}; // least common multiplier
	
	lcm = std::lcm(this->denominator, f.denominator);
	this->numerator = this->numerator * (lcm / this->denominator);
	this->numerator += f.numerator * (lcm / f.denominator);
	this->denominator = lcm;

	this->simplify();
	return *this;
}

Fraction Fraction::operator+(const Fraction& f)
{
	Fraction sum = *this;
	sum += f;
	sum.simplify();
	return sum;
}

std::strong_ordering Fraction::operator<=>(const Fraction& f) const
{
	int lcm = std::lcm(this->denominator, f.denominator);
	int lnumerator = this->numerator * (lcm / this->denominator);
	int rnumerator = f.numerator * (lcm / f.denominator);
	return lnumerator <=> rnumerator;
}

bool Fraction::operator==(const Fraction& f) const
{
	return this->numerator == f.numerator && this->denominator==f.denominator;
}

int Fraction::get_numerator() const
{
	return this->numerator;
}

int Fraction::get_denominator() const
{
	return this->denominator;
}

void Fraction::print() const
{
	if (denominator == 1)
		std::cout << this->numerator;
	else if (denominator == -1)
		std::cout << -this->numerator;
	else
		std::cout << this->numerator << '/' << this->denominator;
}
