#include "_10_04_InheritanceAccessSpecifiers.h"
#include <iostream>

void _10_04_InheritanceAccessSpecifiers::Test()
{
	Base base{};
	std::cout<<base.m_public;

	Pub pub{};
	std::cout << pub.m_public;
	std::cout << pub.m_public1;

	Pri pri{};
	//std::cout << pri.m_public;//error
	std::cout << pri.m_public1;

	Pro pro;
	//std::cout << pro.m_public;//error
	std::cout << pro.m_public1;

	Def def;
	//std::cout << def.m_public;//error
	std::cout << def.m_public1;
}
