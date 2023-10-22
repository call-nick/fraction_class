# Class designed to handle fractions

Class Fraction has function definitions in file fraction.h and the implementation in file fraction.cpp.

For testing, the doctest library is used. All tests are placed in tests.cpp file.

To compile a project using g++ you need the following command:

`g++ -std=c++20 tests.cpp main.cpp fraction.h fraction.cpp -o main`

To run the tests you need to compile the project with the -DDEBUG flag:

`g++ -DEGBUG -std=c++20 tests.cpp main.cpp fraction.h fraction.cpp -o main`

then run `/.main`

Future versions will add explicit support for subtraction, multiplication and division.
