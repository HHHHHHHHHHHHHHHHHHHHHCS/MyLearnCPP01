#include "_12_01_FunctionTemplates.h"
#include <iostream>

void _12_01_FunctionTemplates::Test()
{
	Test01();
}

void _12_01_FunctionTemplates::Test01()
{
	int i = Max(3, 7);
	std::cout << i << '\n';

	double d = Max(3.3, 7.4);
	std::cout << d << '\n';

	char ch = Max('a', '4');
	std::cout << ch << '\n';

	std::cout << MoreThan(5, 6) << '\n';

	std::cout << MoreThan(5.5, 4) << '\n';

}
