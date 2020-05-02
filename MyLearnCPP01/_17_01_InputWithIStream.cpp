#include "_17_01_InputWithIStream.h"
#include <iostream>
#include <iomanip>
#include <string>

void _17_01_InputWithIStream::Test()
{
	//Test01();
	//Test02();
	//Test03();
	//Test04();
	Test05();
}

void _17_01_InputWithIStream::Test01()
{
	//如果输入的长度不符合10  结束的时候会报错
	// char buf0[10];
	// std::cin >> buf0;
	// std::cout << buf0<<std::endl;
	//
	// std::cout << "=======================\n";

	//std::setw(10) 强制把输入截取一段时间
	char buf1[10];
	std::cin >> std::setw(10) >> buf1;
	std::cout << buf1 << '\n';
}

void _17_01_InputWithIStream::Test02()
{
	//空格不会输出
	// char ch;
	// while(std::cin>>ch)
	// 	std::cout << ch;

	char ch;
	while (std::cin.get(ch))
		std::cout << ch;
}

void _17_01_InputWithIStream::Test03()
{
	//输入 并且截取11个长度
	char strBuf[11];
	std::cin.get(strBuf, 11);
	std::cout << strBuf << '\n';
}

void _17_01_InputWithIStream::Test04()
{
	char strBuf[11];
	// Read up to 10 characters
	std::cin.getline(strBuf, 11);
	std::cout << strBuf << '\n';

	// Read up to 10 more characters
	std::cin.getline(strBuf, 11);
	std::cout << strBuf << '\n';

	std::cout << std::cin.gcount() << " characters were read" << std::endl;
}

void _17_01_InputWithIStream::Test05()
{
	std::string strBuf;
	std::getline(std::cin, strBuf);
	std::cout << strBuf << '\n';
}

