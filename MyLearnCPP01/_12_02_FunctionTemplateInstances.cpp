#include "_12_02_FunctionTemplateInstances.h"
#include <iostream>

void _12_02_FunctionTemplateInstances::Test()
{
	//Test01();
	Test02();
}

void _12_02_FunctionTemplateInstances::Test01()
{
	Cents x{1}, y{2};
	std::cout << Max(x, y) << '\n';
}

void _12_02_FunctionTemplateInstances::Test02()
{
	int arr[]{1, 2, 3, 4, 5, 6};
	std::cout << Average(arr, static_cast<int>(std::size(arr))) << '\n';

	Cents cents[] = {Cents{2}, Cents{3}, Cents{4}, Cents{5}};
	std::cout << Average(cents, static_cast<int>(std::size(cents))) << '\n';
}
