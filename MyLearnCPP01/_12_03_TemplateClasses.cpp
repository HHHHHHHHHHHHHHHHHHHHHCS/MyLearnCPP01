#include "_12_03_TemplateClasses.h"
#include <iostream>

void _12_03_TemplateClasses::Test()
{
	Test01();
}

void _12_03_TemplateClasses::Test01()
{
	_12_03_TemplateClasses_Array<int> intArray(12);
	_12_03_TemplateClasses_Array<double> doubleArray(12);

	for (int count = 0; count < intArray.GetLength(); ++count)
	{
		intArray[count] = count;
		doubleArray[count] = count + 0.5;
	}

	for (int count = intArray.GetLength() - 1; count >= 0; --count)
		std::cout << intArray[count] << "\t" << doubleArray[count] << '\n';
}
