#include "_10_05_AddingNewFunctionality.h"

void _10_05_AddingNewFunctionality::Test()
{
	Base b1{3};
	Derived d1{4};

	b1.Identify();
	std::cout << d1.GetValue() << '\n';
}
