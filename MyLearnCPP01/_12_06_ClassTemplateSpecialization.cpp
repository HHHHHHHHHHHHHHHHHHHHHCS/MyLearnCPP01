#include "_12_06_ClassTemplateSpecialization.h"
#include <iostream>

void _12_06_ClassTemplateSpecialization::Test()
{
	Test01();
}

void _12_06_ClassTemplateSpecialization::Test01()
{
	//特殊化模版会优先与泛型模版


	// Define a Storage8 for integers (instantiates Storage8<T>, where T = int)
	Storage8<int> intStorage;

	for (int count = 0; count < 8; ++count)
		intStorage.Set(count, count);

	for (int count = 0; count < 8; ++count)
		std::cout << intStorage.Get(count) << '\n';

	// Define a Storage8 for bool  (instantiates Storage8<bool> specialization)
	Storage8<bool> boolStorage;
	for (int count = 0; count < 8; ++count)
		boolStorage.Set(count, count & 3);

	for (int count = 0; count < 8; ++count)
		std::cout << (boolStorage.Get(count) ? "true" : "false") << '\n';
}
