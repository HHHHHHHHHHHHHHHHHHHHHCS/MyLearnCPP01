#include "_16_06_StdStringAppending.h"
#include <string>
#include <iostream>

void _16_06_StdStringAppending::Test()
{
	Test01();
	Test02();
}

void _16_06_StdStringAppending::Test01()
{
	std::string str("one");

	str += std::string(" two");

	std::string three(" three");
	str.append(three);

	const std::string four(" four");

	str.append(four);

	auto five(" five");

	str += five;

	std::cout << str << std::endl;
}

void _16_06_StdStringAppending::Test02()
{
	std::string str("one");

	str += ' ';
	str.push_back('2');
	str.append(4, 'b');

	std::cout << str << std::endl;
}
