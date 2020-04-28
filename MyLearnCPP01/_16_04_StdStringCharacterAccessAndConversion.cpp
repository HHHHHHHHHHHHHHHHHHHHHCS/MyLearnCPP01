#include "_16_04_StdStringCharacterAccessAndConversion.h"
#include <string>
#include <iostream>

void _16_04_StdStringCharacterAccessAndConversion::Test()
{
	Test01();
	Test02();
	Test03();
}

void _16_04_StdStringCharacterAccessAndConversion::Test01()
{
	std::string src{"abcdefg"};
	std::cout << src[5] << '\n';
	src[5] = 'X';
	std::cout << src << '\n';

	src.at(5) = 'A';
	std::cout << src << '\n';
}

void _16_04_StdStringCharacterAccessAndConversion::Test02()
{
	//src.c_str() string -> const char* 
	std::string src{"abcdefg"};
	std::cout << std::strlen(src.c_str()) << '\n';

	const char* cc{"abcdefg"};

	//src.data() 跟c_str()一样  只是符合C的代码习惯
	//memcmp compares first n characters of two c-style and return 0 if they are equal
	if (std::memcmp(src.data(), cc, src.length()) == 0)
	{
		std::cout << "The strings are equal" << '\n';
	}
	else
	{
		std::cout << "The strings are not equal" << '\n';
	}
}

void _16_04_StdStringCharacterAccessAndConversion::Test03()
{
	std::string src{"sphinx of black quartz, judge my vow"};

	char buf[20];
	//copy 是没有\0终止符号的
	//返回的拷贝出的数据的长度
	int length{static_cast<int>(src.copy(buf, 5, 10))};
	buf[length] = '\0';

	std::cout << length << '\t'		<< buf << '\n';
}

