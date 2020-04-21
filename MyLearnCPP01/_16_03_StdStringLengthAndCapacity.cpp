#include "_16_03_StdStringLengthAndCapacity.h"
#include <string>
#include <iostream>
#include <ctime>

void _16_03_StdStringLengthAndCapacity::Test()
{
	Test01();
	Test02();
	Test03();
}

void _16_03_StdStringLengthAndCapacity::Test01()
{
	std::string sSource("012345678");
	std::cout << sSource.length() << std::endl;

	std::cout << "==============================" << std::endl;

	std::string sString1("Not Empty");
	std::cout << (sString1.empty() ? "true" : "false") << std::endl;
	std::string sString2; // empty
	std::cout << (sString2.empty() ? "true" : "false") << std::endl;

	std::cout << "==============================" << std::endl;

	std::string sString3("MyString");
	std::cout << sString3.max_size() << std::endl;

	std::cout << "==============================" << std::endl;


	std::string sString4("01234567");
	std::cout << "Length: " << sString4.length() << std::endl;
	std::cout << "Capacity: " << sString4.capacity() << std::endl;

	std::cout << "==============================" << std::endl;

	std::string sString5("0123456789abcde");
	std::cout << "Length: " << sString5.length() << std::endl;
	std::cout << "Capacity: " << sString5.capacity() << std::endl;

	//Capacity 满足2^n 往后扩展成2^(n+1)
	sString5 += "f";
	std::cout << "Length: " << sString5.length() << std::endl;
	std::cout << "Capacity: " << sString5.capacity() << std::endl;
}

void _16_03_StdStringLengthAndCapacity::Test02()
{
	std::string sString("01234567");
	std::cout << "Length: " << sString.length() << std::endl;
	std::cout << "Capacity: " << sString.capacity() << std::endl;

	//这个会让Capacity + x  ,但是可能存在重新分配
	//如果x是负数,则可能收缩字符串
	sString.reserve(200);
	std::cout << "Length: " << sString.length() << std::endl;
	std::cout << "Capacity: " << sString.capacity() << std::endl;

	//如果 长度大于容器 则可能会收缩字符串
	sString.reserve();
	std::cout << "Length: " << sString.length() << std::endl;
	std::cout << "Capacity: " << sString.capacity() << std::endl;
}

void _16_03_StdStringLengthAndCapacity::Test03()
{
	std::srand(static_cast<unsigned int>(time(nullptr)));

	std::string sString{}; //len 0
	sString.reserve(64); //len 64

	for (int i = 0; i < 64; ++i)
		sString += 'a' + std::rand() % 26;

	std::cout << sString << '\n';
}
