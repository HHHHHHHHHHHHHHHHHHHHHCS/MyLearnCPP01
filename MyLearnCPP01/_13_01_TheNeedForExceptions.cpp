#include "_13_01_TheNeedForExceptions.h"
#include <cstring>
#include <iostream>
#include <fstream>

void _13_01_TheNeedForExceptions::Test()
{
	Test01();
	Test02();
	Test03();
}

int _13_01_TheNeedForExceptions::FindFirstChar(const char* string, char ch)
{
	const std::size_t stringLen{strlen(string)};
	for (std::size_t index = 0; index < stringLen; ++index)
	{
		if (string[index] == ch)
		{
			return static_cast<int>(index);
		}
	}

	return -1;
}


void _13_01_TheNeedForExceptions::Test01()
{
	std::cout << FindFirstChar("chifan", 'c') << '\n';
	std::cout << FindFirstChar("chifan", '!') << '\n';
}

double _13_01_TheNeedForExceptions::Divide(int x, int y, bool& success)
{
	if (y == 0)
	{
		success = false;
		return 0.0;
	}

	success = true;
	return static_cast<double>(x) / y;
}

void _13_01_TheNeedForExceptions::Test02()
{
	bool success;
	double result = Divide(5, 3, success);

	if (!success)
		std::cerr << "An error occurred" << std::endl;
	else
		std::cout << "The answer is " << result << '\n';

	result = Divide(5, 0, success);

	if (!success)
		std::cerr << "An error occurred" << std::endl;
	else
		std::cout << "The answer is " << result << '\n';
}


//enum 在C++11 加了class 域概念  避免子成员与别人的子成员重名
_13_01_TheNeedForExceptions_ParseResult _13_01_TheNeedForExceptions::SetupIni(std::string path)
{
	std::ifstream setupIni(path);

	if (!setupIni)
		return _13_01_TheNeedForExceptions_ParseResult::ERROR_OPENING_FILE;

	return _13_01_TheNeedForExceptions_ParseResult::SUCCESS;
}

void _13_01_TheNeedForExceptions::Test03()
{
	std::cout << static_cast<int>(SetupIni()) << '\n';
}
