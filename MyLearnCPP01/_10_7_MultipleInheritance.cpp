#include "_10_7_MultipleInheritance.h"

void _10_7_MultipleInheritance::Test()
{
	//Test01();
	Test02();
}


void _10_7_MultipleInheritance::Test01()
{
	WirelessAdapter wa(1, 2);
	std::cout << wa.GetID() << std::endl;
}


void _10_7_MultipleInheritance::Test02()
{
	Copier c{ 2 };
	c.GetValue();
}
