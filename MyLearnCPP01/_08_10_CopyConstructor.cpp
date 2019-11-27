#include "_08_10_CopyConstructor.h"
#include <iostream>

void _08_10_CopyConstructor::Test()
{
	Fraction fiveThirds(5, 3);
	Fraction fCopy(fiveThirds);
	std::cout << fCopy << '\n';
	Fraction copy(Fraction(8, 9));
	std::cout << copy << '\n';

}
