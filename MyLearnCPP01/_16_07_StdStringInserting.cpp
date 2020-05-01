#include "_16_07_StdStringInserting.h"
#include <string>
#include <iostream>

void _16_07_StdStringInserting::Test()
{
	Test01();
	Test02();
	Test03();
}

void _16_07_StdStringInserting::Test01()
{
	std::string str{"aaa"};
	std::cout << str << std::endl;

	str.insert(2, std::string("bbb"));
	std::cout << str << std::endl;

	str.insert(4, "cccc");
	std::cout << str << '\n';
}

void _16_07_StdStringInserting::Test02()
{
	std::string sString("aaaa");

	const std::string sInsert("01234567");
	sString.insert(2, sInsert, 3, 4); // insert substring of sInsert from index [3,7) into sString at index 2
	std::cout << sString << std::endl;

	sString = std::string("aaaa");

	sString.insert(2, "bcdef", 3);
	std::cout << sString << std::endl;


	sString = std::string("aaaa");

	sString.insert(2, 4, 'c');
	std::cout << sString << std::endl;
}

void _16_07_StdStringInserting::Test03()
{
	std::string str{"cccc"};
	str.insert(str.begin() + 3, 4, 'b');
	std::cout << str << std::endl;

	str.insert(str.begin(), 'a');
	std::cout << str << std::endl;

	std::string t = "asdf";
	str.insert(str.begin(), t.begin(), t.end());
	std::cout << str << '\n';
}
