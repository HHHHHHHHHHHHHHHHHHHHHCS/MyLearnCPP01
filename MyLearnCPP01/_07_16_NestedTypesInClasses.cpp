#include "_07_16_NestedTypesInClasses.h"
#include <iostream>

void _07_16_NestedTypesInClasses::Test()
{
	Test01();
}

void _07_16_NestedTypesInClasses::Test01()
{
	Fruit apple(Fruit::APPLE);

	if (apple.getType() == Fruit::APPLE)
		std::cout << "I am an apple";
	else
		std::cout << "I am not an apple";
}

