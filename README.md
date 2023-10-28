# Class designed to handle fractions

Class Fraction has function definitions in file fraction.h and the implementation in file fraction.cpp.

For testing, the doctest library is used. All tests are placed in tests.cpp file.

To compile a project using g++ you need the following command:

```
g++ -std=c++20 tests.cpp main.cpp fraction.h fraction.cpp -o main
```

To run the tests you need to compile the project with the -DDEBUG flag:

```
g++ -DEGBUG -std=c++20 tests.cpp main.cpp fraction.h fraction.cpp -o main
```

then run `/.main`

In 0.2.0 version added overloaded arithmetic and comparison operators. Also default constructor in 0.2.0 version create fraction with numerator = 0 and denominator = 1 unlike the initial version, which created fraction with numerator = 1 and denominator = 1.
It seems that it remains only to understand and implement the best way to handle errors on division by zero.

P.S.
This project was created for two reasons. The first is of course the practice in c++. The second is the need to represent fractions in the matrix, to solve problems by simplex method.
Of course in professional projects you should pay attention to other classes to represent fractions, for example from the boost library