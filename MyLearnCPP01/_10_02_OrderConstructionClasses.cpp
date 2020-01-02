#include "_10_02_OrderConstructionClasses.h"

void _10_02_OrderConstructionClasses::Test()
{
	Test01();
	Test02();
}

void _10_02_OrderConstructionClasses::Test01()
{
	std::cout << "Instantiating Base\n";
	Base cBase;

	std::cout << "Instantiating Derived\n";
	Derived cDerived;

}

void _10_02_OrderConstructionClasses::Test02()
{

	std::cout << "Constructing A: \n";
	A cA;

	std::cout << "Constructing B: \n";
	B cB;

	std::cout << "Constructing C: \n";
	C cC;

	std::cout << "Constructing D: \n";
	D cD;
}
