#include "_11_01_PointersReferencesBaseClass.h"
#include <iostream>

void _11_01_PointersReferencesBaseClass::Test()
{
	Test01();
}

void _11_01_PointersReferencesBaseClass::Test01()
{
	Derived derived{5};
	std::cout << "derived is a " << derived.GetName() << " and has value " << derived.GetValue() << '\n';

	Derived& rDerived{derived};
	std::cout << "rDerived is a " << rDerived.GetName() << " and has value" << rDerived.GetValue() << '\n';

	rDerived.SetValue(10);

	std::cout << "derived is a " << derived.GetName() << " and has value " << derived.GetValue() << '\n';

	Derived rDerived1{ derived };

	rDerived1.SetValue(20);

	std::cout << "derived is a " << derived.GetName() << " and has value " << derived.GetValue() << '\n';


	Derived* pDerived{&derived};
	std::cout << "pDerived is a " << pDerived->GetValueDoubled() << "and has value" << pDerived->GetName() << '\n';
}
