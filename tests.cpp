//This file contains tests for Fraction class


#ifndef TESTS_H
#define TESTS_H

#ifdef DEBUG

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include <iostream>
#include "fraction.h"
#include "doctest.h"

TEST_CASE("Testing creating fractions by passing 2 ints")
{
	Fraction f1;

	CHECK(f1.get_numerator() == 1);
	CHECK(f1.get_denominator() == 1);

	Fraction f2(0,0);

	CHECK(f2.get_numerator() == 0);
	CHECK(f2.get_denominator() == 0);

	Fraction f3(-1,-1);

	CHECK(f3.get_numerator() == -1);
	CHECK(f3.get_denominator() == -1);

	Fraction f4(-1,1);

	CHECK(f4.get_numerator() == -1);
	CHECK(f4.get_denominator() == 1);

	Fraction f5(1,-1);

	CHECK(f5.get_numerator() == 1);
	CHECK(f5.get_denominator() == -1);
}

TEST_CASE("Testing creating fractions by passing another fraction")
{
	Fraction f1(5,-10);
	Fraction f(f1);

	CHECK(f.get_numerator() == 5);
	CHECK(f.get_denominator() == -10);
	CHECK(f == f1);

}

TEST_CASE("Testing fraction simplifying")
{
	Fraction f1;
	f1.simplify();

	CHECK(f1.get_numerator() == 1);
	CHECK(f1.get_denominator() == 1);

	Fraction f2(9,3);
	f2.simplify();

	CHECK(f2.get_numerator() == 3);
	CHECK(f2.get_denominator() == 1);
	
	Fraction f3(0, 1);
	f3.simplify();

	CHECK(f3.get_numerator() == 0);
	CHECK(f3.get_denominator() == 1);

	Fraction f4(17,5);
	f4.simplify();

	CHECK(f4.get_numerator() == 17);
	CHECK(f4.get_denominator() == 5);

}

TEST_CASE("Testing fraction+= operator")
{

	Fraction f1(1,1);
	Fraction f2(1,1);
	f1 += f2;

	CHECK(f1.get_numerator() == 2);
	CHECK(f1.get_denominator() == 1);

	Fraction f3(1,-1);
	Fraction f4(1,1);
	f3 += f4;

	CHECK(f3.get_numerator() == 0);
	CHECK(f3.get_denominator() == 1);

	Fraction f5(5,3);
	Fraction f6(4,4);
	f5 += f6;

	CHECK(f5.get_numerator() == 8);
	CHECK(f5.get_denominator() == 3);

}

TEST_CASE("Testing fraction+ operator")
{
	Fraction f1(0, 0);
	Fraction f2(3,-4);
	Fraction F1 = f1 + f2;

	CHECK(F1.get_numerator() == 0);
	CHECK(F1.get_denominator() == 0);

	Fraction f3(-1,1);
	Fraction f4(1,1);
	Fraction F2 = f3 + f4;

	CHECK(F2.get_numerator() == 0);
	CHECK(F2.get_denominator() == 1);

}

TEST_CASE("Testing fraction<=> operator")
{
	Fraction f1;
	Fraction f2;

	std::strong_ordering o1 {f1 <=> f2};
	
	CHECK (o1 == std::strong_ordering::equal);

	Fraction f3(1,2);
	Fraction f4(2,4);
	std::strong_ordering o2 {f3 <=> f4};

	CHECK (o2 == std::strong_ordering::equal);

	Fraction f5(-1,2);
	Fraction f6(2,7);
	std::strong_ordering o3 {f5 <=> f6};

	CHECK (o3 == std::strong_ordering::less);

	Fraction f7(2,9);
	Fraction f8(1,9);
	std::strong_ordering o4 {f7 <=> f8};

	CHECK (o4 == std::strong_ordering::greater);

}

#endif
#endif
