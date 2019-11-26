#include "_08_10_CopyConstructor.h"
#include <iostream>

void _08_10_CopyConstructor::Test()
{
	Fraction fiveThirds(5, 3);
	Fraction fCopy(fiveThirds);
	Fraction copy(Fraction(5, 3));

	std::cout << fCopy << '\n';
}
