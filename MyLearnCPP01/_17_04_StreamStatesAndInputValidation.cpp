#include "_17_04_StreamStatesAndInputValidation.h"
#include <iostream>
#include <string>
#include <locale>
#include <cstdint>
#include <cctype>
#include <sstream>

void _17_04_StreamStatesAndInputValidation::Test()
{
	//Test01();
	//Test02();
	//Test03();
	Test04();
}

void _17_04_StreamStatesAndInputValidation::Test01()
{
	std::cout << "Enter your age: ";
	int nAge;
	std::cin >> nAge;
	std::cout << nAge << '\n';

	std::getchar(); //获取回车

	while (true)
	{
		std::cout << "Enter your name:";
		std::string strName;
		std::getline(std::cin, strName);

		bool bRej{false};

		for (std::size_t nIndex{0}; nIndex < strName.length() && !bRej; ++nIndex)
		{
			//判断是否是字母
			if (std::isalpha(strName[nIndex])) //#include <cctype>
			{
				continue;
			}

			if (strName[nIndex] == ' ')
			{
				continue;
			}

			bRej = true;
		}

		if (!bRej)
		{
			break;
		}

		std::cout << strName << '\n';
	}
}

bool _17_04_StreamStatesAndInputValidation::InputMatches(std::string strUserInput, std::string strTemplate)
{
	if (strTemplate.length() != strUserInput.length())
	{
		return false;
	}

	for (std::size_t nIndex{0}; nIndex < strTemplate.length(); ++nIndex)
	{
		switch (strTemplate[nIndex])
		{
		case '#': //匹配数字
			if (!std::isdigit(strUserInput[nIndex]))
			{
				return false;
			}
			break;
		case '_': //匹配空格
			if (!std::isspace(strUserInput[nIndex]))
			{
				return false;
			}
			break;
		case '@': //匹配字母
			if (!std::isalpha(strUserInput[nIndex]))
			{
				return false;
			}
			break;
		case '?': //匹配任何
			break;
		default: //匹配字母相同
			if (strUserInput[nIndex] != strTemplate[nIndex])
			{
				return false;
			}
		}
	}
	return true;
}


void _17_04_StreamStatesAndInputValidation::Test02()
{
	std::string strVal;

	while (true)
	{
		std::cout << "Enter a phone number (###) ###-####" << '\n';
		std::getline(std::cin, strVal);
		if (!InputMatches(strVal, "(###) ###-####"))
		{
			break;
		}
		std::cout << "You entered: " << strVal << '\n';
	}
}

void _17_04_StreamStatesAndInputValidation::Test03()
{
	int nAge;

	while (true)
	{
		std::cout << "Enter your age:\n";
		std::cin >> nAge;

		if (std::cin.fail()) //如果输入检测失败
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n'); //忽略32767 个 \n
			continue;
		}
		std::cin.ignore(32767, '\n');
		if (std::cin.gcount() > 1) //gcount是返回上一次非格式化输入回的字符数 如果有输入 希望继续输入
			continue;

		if (nAge <= 0)
			continue;

		break;
	}

	std::cout << "You entered : " << nAge << '\n';
}

void _17_04_StreamStatesAndInputValidation::Test04()
{
	int nAge;

	while (true)
	{
		std::cout << "Enter your age: ";
		std::string strAge;
		std::cin >> strAge;

		bool bVal{true};
		for (std::size_t nIndex{0}; nIndex < strAge.length(); ++nIndex)
		{
			if (!std::isdigit(strAge[nIndex]))
			{
				bVal = false;
				break;
			}
		}
		if (!bVal)
			continue;

		std::stringstream strStream;
		strStream << strAge;
		strStream >> nAge;

		if (nAge <= 0)
			continue;

		break;
	}

	std::cout << "You entered: " << nAge << '\n';
}
