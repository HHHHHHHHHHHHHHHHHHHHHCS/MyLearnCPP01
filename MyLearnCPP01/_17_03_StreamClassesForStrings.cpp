#include "_17_03_StreamClassesForStrings.h"
#include <iosfwd>
#include <sstream>
#include <iostream>

void _17_03_StreamClassesForStrings::Test()
{
	//Test01();
	Test02();
}

void _17_03_StreamClassesForStrings::Test01()
{
	std::stringstream os0;
	os0 << "en garde!" << '\n';
	std::cout << os0.str();
	os0.str("en !!!");
	std::cout << os0.str();


	std::stringstream os1;
	os1 << "12345 67.89";
	std::string strVal0;
	os1 >> strVal0;
	std::string strVal1;
	os1 >> strVal1;
	std::cout << strVal0 << " - " << strVal1 << std::endl;


	std::stringstream os3;
	int nValue{12345};
	double dValue{67.89};
	os3 << nValue << ' ' << dValue;
	std::string strValue1, strValue2;
	os3 >> strValue1 >> strValue2;
	std::cout << strValue1 << ' ' << strValue2 << '\n';


	std::stringstream os;
	os << "12345 67.89"; // insert a string of numbers into the stream
	int nValue1;
	double dValue1;
	os >> nValue1 >> dValue1;
	std::cout << nValue << ' ' << dValue << '\n';
}

void _17_03_StreamClassesForStrings::Test02()
{
	std::stringstream os0;
	os0 << "Hello ";
	os0.str(""); // erase the buffer
	os0 << "World!";
	std::cout << os0.str();


	std::stringstream os1;
	os1 << "Hello ";
	os1.str(std::string{}); // erase the buffer
	os1 << "World!";
	std::cout << os1.str();


	std::stringstream os2;
	os2 << "Hello ";
	os2.str(""); // 只是清除buff
	os2.clear(); // 还会清除错误的flag
	os2 << "World!";
	std::cout << os2.str();
}
